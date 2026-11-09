#include <stdio.h>

enum Color
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum Color color;
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (color = RED; color <= GREEN; color++)
    {
        printf("%s=%d\n", names[color], color);
    }

    return 0;
}