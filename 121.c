#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    file = fopen("info.txt", "w");

    if (file == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    fclose(file);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}