
#include <stdio.h>

int main()
{
    char str[100];
    int i, count[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i] - 'a'] == 1)
        {
            printf("First repeating character: %c", str[i]);
            return 0;
        }

        count[str[i] - 'a']++;
    }

    printf("No repeating character found");

    return 0;
}
