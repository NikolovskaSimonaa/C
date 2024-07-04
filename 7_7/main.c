#include <stdio.h>

void dzvezdi(int n){
    int i;
    if(n==0) return;
    for(i=1;i<=n;i++){
        printf("*");
    }
    printf("\n");
    n--;
    dzvezdi(n);
}

int main(){
    int n;
    printf("Vnesi broj n:\n");
    scanf("%d", &n);
    dzvezdi(n);
    return 0;
}
