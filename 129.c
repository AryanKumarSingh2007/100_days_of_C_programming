#include <stdio.h>

int main()
{
    FILE *file;
    int num;
    int sum = 0, count = 0;
    float average;

    file = fopen("numbers.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    fclose(file);

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("File contains no integers.\n");
    }

    return 0;
}