#include <stdio.h>

int main()
{
    int a=1, b=2, c=3, d=4;

    /* Version a) */
    printf("Numbers: 1, 2, 3, 4\n");

    /* Version b) */
    printf("Numbers: %d, %d, %d, %d\n", a, b, c, d);

    /* Version c) */
    printf("Numbers: 1, ");
    printf("2, ");
    printf("3, ");
    printf("4\n");

    return 0;
}
