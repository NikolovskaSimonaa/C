#include <stdio.h>

void del1(int n, int granica){
    int i;
    if(n==1){
        printf("%d ", n);
        return;
    }
    for(i=n;i<=granica;i++){
        printf("%d ", i);
    }
    printf("\n");
    del1(n-1,granica);
    printf("%d ", n);
}

void del2(int n, int granica){
    int i;
    if(n==granica){
        printf("%d", n);
        return;
    }
    for(i=n;i<=granica;i++){
        printf("%d ", i);
    }
    printf("\n");
    del2(n+1,granica);
}

int main(){
    int n;
    printf("Vnesi broj n:\n");
    scanf("%d", &n);
    del1(n,n);
    printf("\n");
    del2(2,n);
    return 0;
}
