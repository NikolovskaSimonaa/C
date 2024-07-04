#include <stdio.h>

#define max 100

void vnesiMatricaIterativno(int m, int n, int matrica[max][max]){
    int i, j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            printf("Vnesi sleden element:\n");
            scanf("%d", &matrica[i][j]);
        }
}

void pechatiMatricaIterativno(int m, int n, int matrica[max][max]){
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
}

void vnesiMatricaRekurzivno(int m, int n, int matrica[max][max]){
    int koloni=n;
    if(m==0)
        return;
    while(n>0){
        printf("Vnesi sleden element:\n");
        scanf("%d", &matrica[m-1][n-1]);
        n--;
    }
    vnesiMatricaRekurzivno(m-1,koloni,matrica);
}

void pechatiMatricaRezurzivno(int m, int n, int matrica[max][max]){
    int koloni=n;
    if(m==0)
        return;
    while(n>0){
        printf("%d ", matrica[m-1][n-1]);
        n--;
    }
    printf("\n");
    pechatiMatricaRezurzivno(m-1,koloni,matrica);
}

int main(){
    int matrica[max][max];
    int m, n; // m - redici, n - koloni
    printf("Vnesi gi dimenziite na matricata:\n");
    scanf("%d%d", &m, &n);
    printf("Iterativno vnesuvanje i pecatenje na elementite:\n");
    vnesiMatricaIterativno(m,n,matrica);
    pechatiMatricaIterativno(m,n,matrica);

    printf("Vnesi gi dimenziite na matricata:\n");
    scanf("%d%d", &m, &n);
    printf("Rekurzivno vnesuvanje i pecatenje na elementite:\n");
    vnesiMatricaRekurzivno(m,n,matrica);
    pechatiMatricaRezurzivno(m,n,matrica);
    return 0;
}
