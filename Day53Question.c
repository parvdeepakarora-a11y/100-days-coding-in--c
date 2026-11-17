
#include <stdio.h>

int main()
{
    int n, i, totalSum = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum = totalSum + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot Index = %d\n", pivot);

    return 0;
}
