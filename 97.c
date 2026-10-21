#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ')
    {
        printf("%c ", name[0]);
    }

    while (name[i] != '\0')
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c ", name[i + 1]);
        }

        i++;
    }

    return 0;
}