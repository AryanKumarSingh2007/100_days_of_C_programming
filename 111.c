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
        int negative = 0;

        for (int j = i; j < i + k; j++)
        {
            if (a[j] < 0)
            {
                negative = a[j];
                break;
            }
        }

        printf("%d ", negative);
    }

    printf("\n");

    return 0;
}