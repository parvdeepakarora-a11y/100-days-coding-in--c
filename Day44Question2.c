
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }

        i++;
    }

    printf("%s", str);

    return 0;
}
