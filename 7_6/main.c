#include <stdio.h>

int nzd(int a, int b){
    if(a==0 || b==0) return 1;
    if(a==b) return a;

    if(a>b){
        return nzd(a-b, b);
    }
    return nzd(a, b-a);
}

int main()
{
    int a, b;
    printf("Vnesi dva broja:\n");
    scanf("%d%d", &a, &b);
    printf("Najgolem zaednicki delitel: %d", nzd(a, b));
    return 0;
}
