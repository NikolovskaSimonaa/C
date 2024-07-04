#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 20

int main()
{
    int vnesi,m;
    char string[max], *den, *mesec, *godina;
    printf("Za vnesuvanje datum vnesi 1, za kraj vnesi 0?\n");
    scanf("%c", &vnesi);
    while(vnesi!=0){
        fflush(stdin);
        printf("Vnesi datum vo oblik den/mesec/godina :\n");
        gets(string);
        den=strtok(string,"//");
        mesec=strtok(NULL,"//");
        godina=strtok(NULL," ");
        printf("%s ", den);
        m=atoi(mesec);
        if(m==1) printf("januari ");
        if(m==2) printf("fevuari ");
        if(m==3) printf("mart ");
        if(m==4) printf("april ");
        if(m==5) printf("maj ");
        if(m==6) printf("juni ");
        if(m==7) printf("juli ");
        if(m==8) printf("avgust ");
        if(m==9) printf("septemvri ");
        if(m==10) printf("oktomvri ");
        if(m==11) printf("noemvri ");
        if(m==12) printf("dekemvri ");

        printf("%s\n", godina);
        printf("Za vnesuvanje datum vnesi 1, za kraj vnesi 0?\n");
        vnesi=getchar();
    }
    return 0;
}
