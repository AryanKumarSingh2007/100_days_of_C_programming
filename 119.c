#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    int count[1000] = {0};

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;

        if (count[a[i]] == 2)
        {
            printf("Repeated element: %d\n", a[i]);
            return 0;
        }
    }

    return 0;
}