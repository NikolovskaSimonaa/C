#include <stdio.h>

int main()
{
    int a, b, c;
    int average, sum, product;
    printf("Enter three numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum=a+b+c;
    average=sum/3;
    product=a*b*c;
    printf("Average: %d\n", average);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}
