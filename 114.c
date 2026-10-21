#include <stdio.h>

int main()
{
    char s[100];
    int maxLength = 0;

    printf("Enter string: ");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        int seen[256] = {0};
        int length = 0;

        for (int j = i; s[j] != '\0'; j++)
        {
            unsigned char ch = s[j];

            if (seen[ch] == 1)
                break;

            seen[ch] = 1;
            length++;
        }

        if (length > maxLength)
            maxLength = length;
    }

    printf("%d\n", maxLength);

    return 0;
}