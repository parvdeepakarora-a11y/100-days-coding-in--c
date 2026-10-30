
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start = 0, end, temp;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while(start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("Modified sentence: %s", str);

    return 0;
}
