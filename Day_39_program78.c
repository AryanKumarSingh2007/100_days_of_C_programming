#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int matrix[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &n);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}