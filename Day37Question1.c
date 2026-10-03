#include <stdio.h>

int main() {
    int matrix[10][10], sum[10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        sum[i] = 0;

        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}