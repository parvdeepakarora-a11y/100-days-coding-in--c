#include <stdio.h>

int isSymmetric(int a[][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(isSymmetric(a, n))
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}