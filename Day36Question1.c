#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, columns, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter matrix elements:\n");

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    printf("Matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}