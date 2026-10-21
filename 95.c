#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    char temp[200];

    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
    {
        printf("Rotation\n");
    }
    else
    {
        printf("Not rotation\n");
    }

    return 0;
}