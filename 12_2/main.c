#include <stdio.h>
#include <string.h>

typedef struct {
    int cifra;
    char bukvi[3];
}Simbol;

void GenerirajBroj(FILE *file, char string[8]){
    int i, j, k;
    Simbol Blank={-1,""};
    for(j=0;j<7;j++){ // za sekoja bukva
        for(i=0;i<10;i++){ //izmini ja cekoja potencijalna cifra
            fseek(file,i*sizeof(Simbol),SEEK_SET);
            fread(&Blank,sizeof(Simbol),1,file);
            if(Blank.cifra!=-1){
                for(k=0;k<strlen(Blank.bukvi);k++){ // proveri dali soodvetnata bukva moze da se kodira so ovaa cifra
                    if(string[j]==Blank.bukvi[k])
                        printf("%d", Blank.cifra);
                }
            }
        }
    }
}

int main(){
    int i;
    char string[8];
    FILE *file;
    Simbol Blank={-1,""};

    if((file=fopen("Conversion.dat","wb"))==NULL)
        printf("Datotekata ne moze da se otvori\n");
    else{
        for(i=0;i<10;i++)
            fwrite(&Blank,sizeof(Simbol),1,file);
    }
    if((file=fopen("Conversion.dat","rb+"))==NULL)
        printf("Datotekata ne moze da se otvori\n");
    else{
        printf("Vnesi cifra, -1 za kraj:\n");
        scanf("%d", &Blank.cifra);
        while(Blank.cifra!=-1){
            printf("Vnesi koi bukvi da bidat kodirani so ovaa cifra:\n");
            fscanf(stdin," %s", Blank.bukvi);
            fseek(file,Blank.cifra*sizeof(Simbol),SEEK_SET);
            fwrite(&Blank,sizeof(Simbol),1,file);
            printf("Vnesi cifra, -1 za kraj:\n");
            scanf("%d", &Blank.cifra);
        }
        printf("Vnesi string:\n");
        scanf(" %s", &string);
        GenerirajBroj(file,string);
    }
    return 0;
}
