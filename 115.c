#include <stdio.h>

int main()
{
    char s[100], t[100];
    int count[26] = {0};

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    int i = 0;

    while (s[i] != '\0')
    {
        count[s[i] - 'a']++;
        i++;
    }

    i = 0;

    while (t[i] != '\0')
    {
        count[t[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}