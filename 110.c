#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid k\n");
        return 0;
    }

    for (int i = 0; i <= n - k; i++)
    {
        int max = a[i];

        for (int j = i + 1; j < i + k; j++)
        {
            if (a[j] > max)
                max = a[j];
        }

        printf("%d ", max);
    }

    printf("\n");

    return 0;
}