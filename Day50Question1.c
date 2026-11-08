#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4)
    {
        printf("Formatted Date: %02d-Apr-%d", dd, yyyy);
    }
    else
    {
        printf("Invalid month");
    }

    return 0;
}