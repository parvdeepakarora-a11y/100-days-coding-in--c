
#include <stdio.h>

int main()
{
    int n, i, target;
    int first = -1, last = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    if(first == -1)
    {
        printf("First occurrence: -1\n");
        printf("Last occurrence: -1\n");
        printf("First index: -1\n");
        printf("Last index: -1\n");
    }
    else
    {
        printf("First occurrence: %d\n", nums[first]);
        printf("Last occurrence: %d\n", nums[last]);
        printf("First index: %d\n", first);
        printf("Last index: %d\n", last);
    }

    return 0;
}
