#include <stdio.h>

int main()
{
    FILE *file;
    char fileName[100];
    char text[200];

    printf("Enter file name: ");
    scanf("%s", fileName);

    file = fopen(fileName, "a");

    if (file == NULL)
    {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(file, "\n%s", text);

    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}