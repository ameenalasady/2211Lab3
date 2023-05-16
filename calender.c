#include <stdio.h>

int main(int argc, char const *argv[])
{
    int days, weekday;

    printf("Enter number of days in month: ");

    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");

    scanf("%d", &weekday);

    printf("\n\n");

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
