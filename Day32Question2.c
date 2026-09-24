#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};
    int max = 0, most;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) {
        count[0] = 1;
    }

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            most = i;
        }
    }

    printf("Digit occurring most times = %d\n", most);
    printf("Occurrences = %d\n", max);

    return 0;
}