#include <stdio.h>

int main()
{
    int n, x, index = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}