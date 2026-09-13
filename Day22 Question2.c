
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            int num = 2 * i - 1;
            int den = 2 * i - 2;
            sum += (double)num / den;
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}