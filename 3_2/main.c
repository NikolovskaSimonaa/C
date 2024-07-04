#include <stdio.h>

int main()
{
    int a, b;
    printf("Vnesi dva broja:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a%2==0)
        printf("%d e paren broj\n", a);
    else
        printf("%d e neparen broj\n", a);
    if(b%2==0)
        printf("%d e paren broj\n", b);
    else
        printf("%d e neparen broj\n", b);
    return 0;
}
