#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL)
    {
        printf("Source file not found!\n");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL)
    {
        printf("Unable to create destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destinationName);

    return 0;
}