#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;
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
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}