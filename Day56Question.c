#include <stdio.h>

int main()
{
    int n, arr[100];
    int i, j, found;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        found = 0;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("-1");
        }

        if(i != n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}