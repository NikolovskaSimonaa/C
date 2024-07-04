#include <stdio.h>

int main()
{
    int a, b, c, d, sum;

    printf("Enter the numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    sum=a+b+c+d;
    printf("The sum of all the numbers is: %d\n", sum);
    return 0;
}
