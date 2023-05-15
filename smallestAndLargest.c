#include <stdio.h>
#include <math.h>

int largest(int int1, int int2, int int3, int int4)
{
    int max1 = fmax(int1, int2);
    int max2 = fmax(int3, int4);

    return (fmax(max1, max2));
}

int smallest(int int1, int int2, int int3, int int4)
{
    int min1 = fmin(int1, int2);
    int min2 = fmin(int3, int4);

    return (fmin(min1, min2));
}

int main(int argc, char const *argv[])
{
    int int1, int2, int3, int4;

    printf("Enter your numbers: ");

    scanf("%d %d %d %d", &int1, &int2, &int3, &int4);

    printf("\nThe largest number is %d\n", largest(int1, int2, int3, int4));

    printf("\nThe smallest number is %d\n", smallest(int1, int2, int3, int4));
}
