#include <stdio.h>

int main(int argc, char const *argv[])
{
    int days, weekday;

    printf("Enter how many days and the weekday at which the month starts (space separated):\n");

    scanf("%d %d", &days, &weekday);

    int weekCounter = weekday - 1;

    for (int i = 0; i < weekday - 1; i++)
    {
        printf("  ");
        printf(" ");
    }

    for (int i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        weekCounter++;

        if (weekCounter >= 7)
        {
            printf("\n");

            weekCounter = 0;
        }
    }

    return 0;
}
