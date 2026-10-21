#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], answer[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int prefix = 1;

    for (int i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix *= a[i];
    }

    int suffix = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= a[i];
    }

    printf("[");

    for (int i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(",");
    }

    printf("]\n");

    return 0;
}