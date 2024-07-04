#include <stdio.h>

#define max 100

float average(int a[], int n){
    int i, sum=0;
    float avg;
    for(i=0;i<n;i++)
        sum+=a[i];
    avg=(float) sum/n;
    return avg;
}

int mostFrequent(int a[], int n){
    int i, j, maximum=0, value=a[0];
    int kolku;
    for(i=0;i<n;i++){
        kolku=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i])
                kolku++;
        }
        if(kolku>maximum){
            maximum=kolku;
            value=a[i];
        }
    }
    return value;
}

void sort(int a[], int n){
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

float median(int a[], int n){
    float median;
    if(n%2==0)
        median=(a[n/2]+a[n/2-1])/2.;
    else
        median=a[n/2];
    return median;
}

void histogram(int a[], int n){
    int i, j;
    int frekfencija[max]={0};
    int izminati[max]={0};

    for (i = 0; i < n; i++) {
        frekfencija[a[i]]++;
    }

    printf("%10s%10s\n", "Vrednost", "Histogram");
    for(i=0;i<n;i++){
        if(izminati[a[i]]==1) continue;
        izminati[a[i]]=1;
        printf("%7d    ", a[i]);
        for(j=0;j<frekfencija[a[i]];j++)
            printf("%c", '*');
        printf("\n");
    }
}

int main(){
    int niza[max];
    int i, n;
    printf("Vnesi ja dimenzijata na nizata:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Vnesi sleden element:\n");
        scanf("%d", &niza[i]);
    }

    printf("Sredna vrednost: %f\n", average(niza,n));
    printf("Najfrekfrentna vrednost vo nizata: %d\n", mostFrequent(niza,n));

    sort(niza,n);
    for(i=0;i<n;i++)
        printf("%d ", niza[i]);
    printf("\nMedijana: %f\n", median(niza,n));

    histogram(niza,n);

    return 0;
}
