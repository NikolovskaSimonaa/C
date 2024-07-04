#include <stdio.h>

int eProst(int a){
    int i;
    if(a==0||a==1) return 0;
    for(i=2;i<=a/2;i++){
        if(a%i==0) return 0;
    }
    return 1;
}

void prosti(int niza[], int n){
    int i;
    for(i=0;i<n;i++){
        if(eProst(i)==1) niza[i]=0;
    }
}

int main(){
    int n, i;
    int niza[100];
    printf("Vnesi go brojot na elementi vo nizata\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        niza[i]=1;
    }
    prosti(niza,n);
    printf("Prosti broevi do %d se: ", n);
    for(i=0;i<n;i++){
        if(niza[i]==0)
            printf("%d ", i);
    }
    return 0;
}
