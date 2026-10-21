#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int currentSum = a[0];
    int maxSum = a[0];

    for (int i = 1; i < n; i++)
    {
        if (currentSum + a[i] > a[i])
            currentSum = currentSum + a[i];
        else
            currentSum = a[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);

    return 0;
}