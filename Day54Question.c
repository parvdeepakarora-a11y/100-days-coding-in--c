
#include <stdio.h>

int main()
{
    int n, x, leftSum, rightSum, i;

    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        for (i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        for (i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
