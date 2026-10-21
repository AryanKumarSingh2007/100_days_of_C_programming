#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[26] = {0};
    int i;

    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        count[str1[i] - 'a']++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        count[str2[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}