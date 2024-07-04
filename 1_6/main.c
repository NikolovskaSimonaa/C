#include <stdio.h>

int main()
{
    int n;
    int a1, a2, a3, a4, a5; // representing the five digits of the number n
    printf("Enter five digit number:\n");
    scanf("%d", &n);
    a5=n%10; //least valuable digit
    a4=(n%100)/10;
    a3=(n%1000)/100;
    a2=(n%10000)/1000;
    a1=n/10000; //most valuable digit
    printf("%d   %d   %d   %d   %d\n", a1, a2, a3, a4, a5);
    return 0;
}
