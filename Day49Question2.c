#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] == ' ')
        i++;

    while (name[i] != '\0')
    {
        if (name[i] != ' ')
        {
            if (i == 0 || name[i - 1] == ' ')
            {
                int j = i;

                while (name[j] != ' ' && name[j] != '\0' && name[j] != '\n')
                    j++;

                if (name[j] == '\0' || name[j] == '\n')
                {
                    while (name[i] != '\0' && name[i] != '\n')
                        printf("%c", name[i++]);
                    break;
                }

                printf("%c. ", name[i]);
                i = j;
            }
        }
        i++;
    }

    return 0;
}