#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        if (n == 0)
        {
            printf("The number is zero.");
        }
        else
        {
            printf("The number is positive.");
        }
    }
    else
    {
        printf("The number is negative.");
    }

    return 0;
}