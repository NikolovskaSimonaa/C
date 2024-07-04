#include <stdio.h>

int main()
{
    int counter=0, p=1, n;
    printf("Vnesi 10 broja: \n");
    while(counter<10){
        scanf("%d", &n);
        p*=n;
        counter++;
    }
    printf("Proizvodot e: %d\n", p);
    return 0;
}
