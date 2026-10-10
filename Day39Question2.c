
#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;
    int a[100][100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}
