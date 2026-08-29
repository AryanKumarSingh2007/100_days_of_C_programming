#include <stdio.h>

int main()
{
    int n, remainder, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("%d", binary);

    return 0;
}