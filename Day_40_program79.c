#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (int sum = 0; sum <= r + c - 2; sum++)
    {
        for (int i = 0; i < r; i++)
        {
            int j = sum - i;

            if (j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}