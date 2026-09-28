#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int second = a[0];

    // Find largest element
    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Find second largest
    for (i = 0; i < n; i++) {
        if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}