#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int start = 0, length = 0;
    int maxStart = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            if (length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;

            if (str[i] == '\0' || str[i] == '\n')
            {
                break;
            }
        }
        else
        {
            length++;
        }

        i++;
    }

    printf("Longest word: ");

    for (i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}