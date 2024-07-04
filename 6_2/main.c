#include <stdio.h>

int main()
{
    int den , mesec, godina;
    printf("Vnesi datum: ");
    scanf("%d%*c%d%*c%d", &godina, &mesec, &den);

    printf("Vneseniot datum e: %d ", den);

    if(mesec==1) printf("januari");
    else if(mesec==2) printf("fevuari");
    else if(mesec==3) printf("mart");
    else if(mesec==4) printf("april");
    else if(mesec==5) printf("maj");
    else if(mesec==6) printf("juni");
    else if(mesec==7) printf("juli");
    else if(mesec==8) printf("avgust");
    else if(mesec==9) printf("septemvri");
    else if(mesec==10) printf("oktomvri");
    else if(mesec==11) printf("noemvri");
    else if(mesec==12) printf("dekemvri");
    else printf("gresen mesec");

    printf(" %d godina. \n", godina);
    return 0;
}
