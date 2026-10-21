#include <stdio.h>

int main()
{
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0' && name[i] != '\n')
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
        i++;
    }

    if (lastSpace == -1)
    {
        printf("%s", name);
        return 0;
    }

    printf("%c. ", name[0]);

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c. ", name[i + 1]);
        }
    }

    for (i = lastSpace + 1;
         name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}