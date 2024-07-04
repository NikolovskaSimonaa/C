#include <stdio.h>

int obratno(int n){
    int rezultat=0;
    while(n>0){
        rezultat=rezultat*10+n%10;
        n=n/10;
    }
    return rezultat;
}

int main()
{
    int n, n_obratno;
    printf("Vnesi cel broj:\n");
    scanf("%d", &n);
    n_obratno=obratno(n);
    printf("Obratno n: %d", n_obratno);
    return 0;
}
