
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 && name[i] != ' ')
        {
            printf("%c", name[i]);
        }
        else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n')
        {
            printf("%c", name[i + 1]);
        }
    }

    printf("\n");

    return 0;
}
