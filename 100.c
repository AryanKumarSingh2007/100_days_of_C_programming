#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("Substrings are:\n");

    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}