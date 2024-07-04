#include <stdio.h>

#define max 100

void pecatiNiza(int ocenki[][5], int n);
void minimum(int ocenki[][5], int n);
void maximum(int ocenki[][5], int n);
void prosek(int ocenki[][5], int n);

int main(){
    void (*functions[4])(int ocenki[][5], int n)={pecatiNiza, maximum, minimum, prosek};
    int ocenki[max][5];
    int i, j, n, choice;
    printf("Vnesi broj na studenti:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Student %d\n", i+1);
        for(j=0;j<5;j++){
            printf("Vnesi ocenka:\n");
            scanf("%d", &ocenki[i][j]);
        }
    }
    printf("Vnesi broj od 0-3, 4 za kraj:\n");
    scanf("%d", &choice);
    while(choice>=0 && choice<4){
        (*functions[choice])(ocenki, n);
        printf("Vnesi broj od 0-3, 4 za kraj:\n");
        scanf("%d", &choice);
    }
    printf("Kraj\n");
    return 0;
}

void pecatiNiza(int ocenki[][5], int n){
    int i, j;
    for(i=0;i<n;i++){
        printf("Ocenki za student %d: ", i+1);
        for(j=0;j<5;j++)
            printf("%d ", ocenki[i][j]);
        printf("\n");
    }
}

void minimum(int ocenki[][5], int n){
    int i, j, min=6;
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            if(min>ocenki[i][j])
                min=ocenki[i][j];
        }
    }
    printf("Minimlana ocenka: %d\n", min);
}

void maximum(int ocenki[][5], int n){
    int i, j, m=0;
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            if(ocenki[i][j]>m)
                m=ocenki[i][j];
        }
    }
    printf("Maksimalna ocenka: %d\n", m);
}

void prosek(int ocenki[][5], int n){
    int i, j, sum;
    float prosek;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<5;j++){
            sum=sum+ocenki[i][j];
        }
        prosek=(float)sum/5;
        printf("Prosek za student %d: %.2f\n", i+1, prosek);
    }
}

