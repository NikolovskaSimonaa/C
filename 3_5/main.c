#include <stdio.h>

int main()
{
    float radius, pi=3.14;
    printf("Vnesi radius na krugot:\n");
    scanf("%f", &radius);
    printf("Perimetar: %f\n", 2*pi*radius);
    printf("Plostina: %f\n", pi*radius*radius);
    return 0;
}
