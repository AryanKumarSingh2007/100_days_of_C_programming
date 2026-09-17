#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int sum[100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        sum[i] = 0;

        for(j = 0; j < cols; j++) {
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row: ");
    for(i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}