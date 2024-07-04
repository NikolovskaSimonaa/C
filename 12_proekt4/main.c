#include <stdio.h>
#include <string.h>

#define max 20

typedef struct{
    int ID;
    char Name[max];
    char Surname[max];
    int Age;
    char Gender;
    int Marriage; // 1/0
    int Credibility; // 0-100
    char Address[50];
    int currentWage;
    int previousWage;
}Employee;

void sortCredibility(Employee E[], int n);
void sortCurrentWage(Employee E[], int n);
void sortPreviousWage(Employee E[], int n);
void setEmployee(Employee E[], int n);
void correctCredibility(Employee E[], int n);

int main(){
    int n, i, izbor;
    Employee employees[50];
    void (*functions[5])(Employee E[], int n)={sortCredibility, sortCurrentWage, sortPreviousWage, setEmployee, correctCredibility};
    printf("Vnesi broj na vraboteni:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("ID:\n");
        scanf("%d", &employees[i].ID);
        printf("Ime:\n");
        scanf(" %s", &employees[i].Name);
        printf("Prezime:\n");
        scanf(" %s", &employees[i].Surname);
        printf("Vozrast:\n");
        scanf("%d", &employees[i].Age);
        printf("Pol:\n");
        scanf(" %c", &employees[i].Gender);
        printf("Bracna sostojba:\n");
        scanf("%d", &employees[i].Marriage);
        printf("Kredibilnost(0-100):\n");
        scanf("%d", &employees[i].Credibility);
        printf("Adresa:\n");
        scanf(" %s", &employees[i].Address);
        printf("Tekovna plata:\n");
        scanf("%d", &employees[i].currentWage);
        printf("Poranesna plata:\n");
        scanf("%d", &employees[i].previousWage);
    }
    printf("Vnesete go vasiot izbor(0-4):\n");
    printf("0 - Sortiraj po kredibilnost\n");
    printf("1 - Sortiraj po tekovna plata\n");
    printf("2 - Sortiraj po poranesna plata\n");
    printf("3 - Koregiraj podatoci za vraboten\n");
    printf("4 - Koregiraj podatoci za kredibilnost na vraboten\n");
    scanf("%d", &izbor);
    (*functions[izbor])(employees,n);
    for(i=0;i<n;i++)
        printf("Vraboten %s %s \tID: %d\tPlata: %d\t Poranesna plata: %d\t Kredibilnost:%d\n", employees[i].Name, employees[i].Surname, employees[i].ID, employees[i].currentWage, employees[i].previousWage, employees[i].Credibility);
    return 0;
}

void sortCredibility(Employee E[], int n){
    int i, j, min;
    Employee temp;
    for(i=0;i<n-1;i++){
        min=E[i].Credibility;
        for(j=i+1;j<n;j++){
            if(min>E[j].Credibility){
                temp=E[j];
                E[j]=E[i];
                E[i]=temp;
            }
        }
    }
}

void sortCurrentWage(Employee E[], int n){
    int i, j, min;
    Employee temp;
    for(i=0;i<n-1;i++){
        min=E[i].currentWage;
        for(j=i+1;j<n;j++){
            if(min>E[j].currentWage){
                temp=E[j];
                E[j]=E[i];
                E[i]=temp;
            }
        }
    }
}

void sortPreviousWage(Employee E[], int n){
    int i, j, min;
    Employee temp;
    for(i=0;i<n-1;i++){
        min=E[i].previousWage;
        for(j=i+1;j<n;j++){
            if(min>E[j].previousWage){
                temp=E[j];
                E[j]=E[i];
                E[i]=temp;
            }
        }
    }
}

void setEmployee(Employee E[], int n){
    int ID, i;
    int credibility, currentWage, previousWage;
    printf("Vnesi ID na vraboteniot:\n");
    scanf("%d", &ID);
    for(i=0;i<n;i++){
        if(ID==E[i].ID){
            printf("Kredibilnost(0-100)\n");
            scanf("%d", &credibility);
            printf("Tekovna plata:\n");
            scanf("%d", &currentWage);
            printf("Poranesna plata:\n");
            scanf("%d", &previousWage);

            E[i].Credibility=credibility;
            E[i].currentWage=currentWage;
            E[i].previousWage=previousWage;

            break;
        }
    }
}

void correctCredibility(Employee E[], int n){
    int i;
    for(i=0;i<n;i++){
        if(E[i].currentWage>E[i].previousWage){
            E[i].Credibility+=3;
            E[i].previousWage=E[i].currentWage;
        }
        else if(E[i].currentWage<E[i].previousWage){
            E[i].Credibility-=3;
            E[i].previousWage=E[i].currentWage;
        }
    }
}
