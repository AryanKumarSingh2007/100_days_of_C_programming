#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter a lowercase string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        count[str[i] - 'a']++;

        if (count[str[i] - 'a'] == 2)
        {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }

        i++;
    }

    printf("No repeating character\n");

    return 0;
}