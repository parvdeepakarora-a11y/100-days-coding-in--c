
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    scanf("%d", &num);

    if (num < 10 && num > -10) {
        printf("%d\n", num);
        return 0;
    }

    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);

    swapped = last * (int)pow(10, digits);
    swapped += num % (int)pow(10, digits);
    swapped -= last;
    swapped += first;

    printf("%d\n", swapped);

    return 0;
}