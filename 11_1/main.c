#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 20

int main()
{
    char string[max], kod[10];
    char *kod_drzava, *tel_del1, *tel_del2, *remainder;
    int i;
    long int l;
    printf("Vnesi telefonski broj vo oblik (333) 333-3333:\n");
    gets(string);
    kod_drzava=strtok(string," ");
    tel_del1=strtok(NULL,"-"); //prodolzuva so tokenizacija na istiot string od tekovnata pozicija
    tel_del2=strtok(NULL," ");
    strcat(tel_del1,tel_del2);
    memcpy(kod,&kod_drzava[1],3);
    i=atoi(kod);
    l=strtol(tel_del1,&remainder,0);
    printf("Kodot na drzavata e %d, a telefonskiot broj e: %ld\n", i, l);
    return 0;
}
