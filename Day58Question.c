
#include <stdio.h>

int main()
{
    int n, i;
    int nums[100], answer[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Calculate prefix products
    answer[0] = 1;

    for(i = 1; i < n; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Calculate suffix products
    int suffix = 1;

    for(i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    printf("Output: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}
