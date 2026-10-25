#include <stdio.h>

int main()
{
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("sample.txt", "r");

    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    /* Count the last line if file is not empty */
    if (characters > 0)
        lines++;

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}