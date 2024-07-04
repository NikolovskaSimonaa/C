#include <stdio.h>

#define max 100

void selekcijaIterativno(int a[], int n){
    int i, j, min;
    for(i=0;i<n-1;i++){
        min=a[i];
        for(j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                a[j]=a[i];
                a[i]=min;
            }
        }
    }
}

void selekcijaRekurzivno(int a[], int n, int indeks){ // indeks - od koj indeks da pocne slednata iteracija na funkcijata
    int min=a[indeks];
    int i;
    if(n==indeks)
        return;
    for(i=indeks+1;i<n;i++){
        if(min>a[i]){
            min=a[i];
            a[i]=a[indeks];
            a[indeks]=min;
        }
    }
    selekcijaRekurzivno(a,n,indeks+1);
}

int main()
{
    int niza[max], n, i;

    // a) Iterativno sortiranje
    printf("Vnesi ja dimenzijata na nizata:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Vnesi sleden element:\n");
        scanf("%d", &niza[i]);
    }
    selekcijaIterativno(niza,n);
    for(i=0;i<n;i++)
        printf("%d ", niza[i]);

    // b) Rekurzivno sortiranje
    printf("\nVnesi ja dimenzijata na nizata:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Vnesi sleden element:\n");
        scanf("%d", &niza[i]);
    }
    selekcijaRekurzivno(niza,n,0);
    for(i=0;i<n;i++)
        printf("%d ", niza[i]);
    return 0;
}
