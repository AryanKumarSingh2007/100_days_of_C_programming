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

    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    int maxSum = sum;

    for (int i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d\n", maxSum);

    return 0;
}