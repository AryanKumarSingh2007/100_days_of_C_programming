#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    int matrix[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}