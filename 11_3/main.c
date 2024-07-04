#include <stdio.h>
#include <string.h>

#define max 1000

void EnglishToMorse(char string[]);
void MorseToEnglish(char *string);

int main(){
    char string1[max], string2[max];
    printf("Vnesi recenica na angliski:\n");
    gets(string1);
    EnglishToMorse(string1);
    printf("\nVnesi Morzeov zbor:\n");
    gets(string2);
    MorseToEnglish(string2);
    return 0;
}

void EnglishToMorse(char string[max]){
    int i=0;
    while(string[i]!='\0'){
        if(string[i]=='A'||string[i]=='a')
            printf("*- ");
        else if(string[i]=='B'||string[i]=='b')
            printf("-*** ");
        else if(string[i]=='C'||string[i]=='c')
            printf("-*-* ");
        else if(string[i]=='D'||string[i]=='d')
            printf("-** ");
        else if(string[i]=='E'||string[i]=='e')
            printf("* ");
        else if(string[i]=='F'||string[i]=='f')
            printf("**-* ");
        else if(string[i]=='G'||string[i]=='g')
            printf("--* ");
        else if(string[i]=='H'||string[i]=='h')
            printf("**** ");
        else if(string[i]=='I'||string[i]=='i')
            printf("** ");
        else if(string[i]=='J'||string[i]=='j')
            printf("*--- ");
        else if(string[i]=='K'||string[i]=='k')
            printf("-*- ");
        else if(string[i]=='L'||string[i]=='l')
            printf("*-** ");
        else if(string[i]=='M'||string[i]=='m')
            printf("-- ");
        else if(string[i]=='N'||string[i]=='n')
            printf("-* ");
        else if(string[i]=='O'||string[i]=='o')
            printf("--- ");
        else if(string[i]=='P'||string[i]=='p')
            printf("*--* ");
        else if(string[i]=='Q'||string[i]=='q')
            printf("--*- ");
        else if(string[i]=='R'||string[i]=='r')
            printf("*-* ");
        else if(string[i]=='S'||string[i]=='s')
            printf("*** ");
        else if(string[i]=='T'||string[i]=='t')
            printf("- ");
        else if(string[i]=='U'||string[i]=='u')
            printf("**- ");
        else if(string[i]=='V'||string[i]=='v')
            printf("***- ");
        else if(string[i]=='W'||string[i]=='w')
            printf("*-- ");
        else if(string[i]=='X'||string[i]=='x')
            printf("-**- ");
        else if(string[i]=='Y'||string[i]=='y')
            printf("-*-- ");
        else if(string[i]=='Z'||string[i]=='z')
            printf("--** ");
        else if(string[i]=='1')
            printf("*---- ");
        else if(string[i]=='2')
            printf("**--- ");
        else if(string[i]=='3')
            printf("***-- ");
        else if(string[i]=='4')
            printf("****- ");
        else if(string[i]=='5')
            printf("***** ");
        else if(string[i]=='6')
            printf("-**** ");
        else if(string[i]=='7')
            printf("--*** ");
        else if(string[i]=='8')
            printf("---** ");
        else if(string[i]=='9')
            printf("----* ");
        else if(string[i]=='0')
            printf("----- ");
        else if(string[i]==' ')
            printf("\n");
        i++;
    }
}

void MorseToEnglish(char *string){
    char *part=strtok(string," ");
    while(part!=NULL){
        if(strcmp(part,"*-")==0)
            printf("a");
        else if(strcmp(part,"-***")==0)
            printf("b");
        else if(strcmp(part,"-*-*")==0)
            printf("c");
        else if(strcmp(part,"-**")==0)
            printf("d");
        else if(strcmp(part,"*")==0)
            printf("e");
        else if(strcmp(part,"**-*")==0)
            printf("f");
        else if(strcmp(part,"--*")==0)
            printf("g");
        else if(strcmp(part,"****")==0)
            printf("h");
        else if(strcmp(part,"**")==0)
            printf("i");
        else if(strcmp(part,"*---")==0)
            printf("j");
        else if(strcmp(part,"-*-")==0)
            printf("k");
        else if(strcmp(part,"*-**")==0)
            printf("l");
        else if(strcmp(part,"--")==0)
            printf("m");
        else if(strcmp(part,"-*")==0)
            printf("n");
        else if(strcmp(part,"---")==0)
            printf("o");
        else if(strcmp(part,"*--*")==0)
            printf("p");
        else if(strcmp(part,"--*-")==0)
            printf("q");
        else if(strcmp(part,"*-*")==0)
            printf("r");
        else if(strcmp(part,"***")==0)
            printf("s");
        else if(strcmp(part,"-")==0)
            printf("t");
        else if(strcmp(part,"**-")==0)
            printf("u");
        else if(strcmp(part,"***-")==0)
            printf("v");
        else if(strcmp(part,"*--")==0)
            printf("w");
        else if(strcmp(part,"-**-")==0)
            printf("x");
        else if(strcmp(part,"-*--")==0)
            printf("y");
        else if(strcmp(part,"--**")==0)
            printf("z");
        else if(strcmp(part,"*----")==0)
            printf("1");
        else if(strcmp(part,"**---")==0)
            printf("2");
        else if(strcmp(part,"***--")==0)
            printf("3");
        else if(strcmp(part,"****-")==0)
            printf("4");
        else if(strcmp(part,"*****")==0)
            printf("5");
        else if(strcmp(part,"-****")==0)
            printf("6");
        else if(strcmp(part,"--***")==0)
            printf("7");
        else if(strcmp(part,"---**")==0)
            printf("8");
        else if(strcmp(part,"----*")==0)
            printf("9");
        else if(strcmp(part,"-----")==0)
            printf("0");
        part=strtok(NULL," ");
    }
}
