#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter first sorted array: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];
    int result[m + n];

    printf("Enter second sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            result[k] = a[i];
            i++;
        }
        else
        {
            result[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        result[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        result[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for (i = 0; i < m + n; i++)
        printf("%d ", result[i]);

    printf("\n");

    return 0;
}