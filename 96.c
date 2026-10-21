#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start, end, j;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        start = i;

        while (str[i] != ' ' &&
               str[i] != '\n' &&
               str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        for (j = end; j >= start; j--)
        {
            printf("%c", str[j]);
        }

        if (str[i] == ' ')
        {
            printf(" ");
            i++;
        }
        else
        {
            break;
        }
    }

    printf("\n");

    return 0;
}