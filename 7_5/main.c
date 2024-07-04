#include <stdio.h>

long fibonacci(long n){
    int i;
    long a=0, b=1;
    long c=0;
    if (n==1) c=1;

    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main()
{
    long n;
    printf("Vnesi broj:\n");
    scanf("%ld", &n);
    printf("Rezulat: %ld\n", fibonacci(n));
    return 0;
}
