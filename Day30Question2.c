#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Number of positive elements = %d\n", positive);
    printf("Number of negative elements = %d\n", negative);
    printf("Number of zero elements = %d\n", zero);

    return 0;
}