
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("%d", i);

    return 0;
}
