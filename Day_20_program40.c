#include <stdio.h>

int main()
{
    int n, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
        {
            complement = complement + 1 * place;
        }
        else
        {
            complement = complement + 0 * place;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("%d", complement);

    return 0;
}