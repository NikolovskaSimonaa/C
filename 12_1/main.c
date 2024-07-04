#include <stdio.h>

typedef struct{
    int kod;
    char ime[30];
    int kolicina;
    float cena;
}Hardware;

void listajProizvodi(FILE *file);
void azurirajProizvod(FILE *file);
void kreirajProizvod(FILE *file);
void izbrisiProizvod(FILE *file);
void listajSpecificenProizvod(FILE *file);
void prodazba(FILE *file);

int main(){
    FILE *file;
    int izbor, i;
    Hardware Proizvod={0,"",0,0.0};
    if((file=fopen("Hardware.dat","wb"))==NULL)
        printf("Datotekata ne moze da se otvori\n");
    else{
        for(i=1;i<=100;i++)
            fwrite(&Proizvod,sizeof(Hardware),1,file);
    }
    if((file=fopen("Hardware.dat","rb+"))==NULL)
        printf("Datotekata ne moze da se otvori\n");
    else{
        printf("Vnesete kod za proizvodot, 0 za kraj:\n");
        scanf("%d", &Proizvod.kod);
        while(Proizvod.kod!=0){
            printf("Vnesete ime, kolicina i cena:\n");
            fscanf(stdin,"%s%d%f", Proizvod.ime, &Proizvod.kolicina, &Proizvod.cena);
            fseek(file,(Proizvod.kod-1)*sizeof(Hardware),SEEK_SET);
            fwrite(&Proizvod,sizeof(Hardware),1,file);
            printf("Vnesete kod za proizvodot, 0 za kraj:\n");
            scanf("%d", &Proizvod.kod);
        }
        printf("Izberete nekoj od ponudenite:\n");
        printf("0 - Izlistaj gi site proizvodi\n");
        printf("1 - Azuriraj proizvod\n");
        printf("2 - Dodadi nov proizvod\n");
        printf("3 - Izbrisi Proizvod\n");
        printf("4 - Izlistaj specificen proizvod\n");
        printf("5 - Napravi prodazba\n");
        printf("6 - Kraj\n");
        scanf("%d", &izbor);
        while(izbor>=0 && izbor<6){
            rewind(file);
            if(izbor==0) listajProizvodi(file);
            if(izbor==1) azurirajProizvod(file);
            if(izbor==2) kreirajProizvod(file);
            if(izbor==3) izbrisiProizvod(file);
            if(izbor==4) listajSpecificenProizvod(file);
            if(izbor==5) prodazba(file);

            printf("Izberete nekoj od ponudenite:\n");
            printf("0 - Izlistaj gi site proizvodi\n");
            printf("1 - Azuriraj proizvod\n");
            printf("2 - Dodadi nov proizvod\n");
            printf("3 - Izbrisi Proizvod\n");
            printf("4 - Izlistaj specificen proizvod\n");
            printf("5 - Napravi prodazba\n");
            printf("6 - Kraj\n");
            scanf("%d", &izbor);
        }
        fclose(file);
    }
    return 0;
}

void listajProizvodi(FILE *file){
    Hardware Proizvod={0,"",0,0.0};
    while(!feof(file)){
        fread(&Proizvod,sizeof(Hardware),1,file);
        if(Proizvod.kod!=0)
            printf("%d %s %d %.2f\n", Proizvod.kod, Proizvod.ime, Proizvod.kolicina, Proizvod.cena);
    }
}

void azurirajProizvod(FILE *file){
    int kod;
    Hardware Proizvod={0,"",0,0.0};
    printf("Vnesete kod na proizvodot koj ke go azurirate:\n");
    scanf("%d", &kod);
    fseek(file,(kod-1)*sizeof(Hardware),SEEK_SET);
    fread(&Proizvod,sizeof(Hardware),1,file);
    if(Proizvod.kod==0)
        printf("Proizvodot ne postoi\n");
    else{
        printf("Vnesete azurirano ime, kolicina i cena:\n");
        scanf(" %s%d%f", Proizvod.ime, &Proizvod.kolicina, &Proizvod.cena);
        fseek(file,(Proizvod.kod-1)*sizeof(Hardware),SEEK_SET);
        fwrite(&Proizvod,sizeof(Hardware),1,file);
    }
}

void kreirajProizvod(FILE *file){
    int kod;
    Hardware Proizvod={0,"",0,0.0};
    printf("Vesete kod na proizvodot koj ke go kreirate:\n");
    scanf("%d", &kod);
    fseek(file,(kod-1)*sizeof(Hardware),SEEK_SET);
    fread(&Proizvod,sizeof(Hardware),1,file);
    if(Proizvod.kod!=0)
        printf("Proizvodot veke postoi\n");
    else{
        Proizvod.kod=kod;
        printf("Vnesete ime, kolicina i cena:\n");
        scanf(" %s%d%f", Proizvod.ime, &Proizvod.kolicina, &Proizvod.cena);
        fseek(file,(Proizvod.kod-1)*sizeof(Hardware),SEEK_SET);
        fwrite(&Proizvod,sizeof(Hardware),1,file);
    }
}

void izbrisiProizvod(FILE *file){
    int kod;
    Hardware Proizvod;
    Hardware Blank={0,"",0,0.0};
    printf("Vesete kod na proizvodot koj sakate da go izbrisete:\n");
    scanf("%d", &kod);
    fseek(file,(kod-1)*sizeof(Hardware),SEEK_SET);
    fread(&Proizvod,sizeof(Hardware),1,file);
    if(Proizvod.kod==0)
        printf("Proizvodot ne postoi\n");
    else{
        fseek(file,(kod-1)*sizeof(Hardware),SEEK_SET);
        fwrite(&Blank,sizeof(Hardware),1,file);
    }
}

void listajSpecificenProizvod(FILE *file){
    int kod;
    Hardware Proizvod={0,"",0,0.0};
    printf("Vnesete kod na proizvodot koj sakate da go izlistate:\n");
    scanf("%d", &kod);
    fseek(file,(kod-1)*sizeof(Hardware),SEEK_SET);
    fread(&Proizvod,sizeof(Hardware),1,file);
    if(Proizvod.kod==0)
        printf("Proizvodot ne postoi\n");
    else
        printf("%d %s %d %.2f\n", Proizvod.kod, Proizvod.ime, Proizvod.kolicina, Proizvod.cena);
}

void prodazba(FILE *file){
    int kod, kolicina;
    Hardware Proizvod={0,"",0,0.0};
    printf("Vnesete kod na proizvodot koj sakate da go kupite:\n");
    scanf("%d", &kod);
    fseek(file,(kod-1)*sizeof(Hardware),SEEK_SET);
    fread(&Proizvod,sizeof(Hardware),1,file);
    if(Proizvod.kod==0)
        printf("Proizvodot ne postoi\n");
    else{
        printf("Vnesete kolicina:\n");
        scanf("%d", &kolicina);
        if(kolicina<=Proizvod.kolicina){
            Proizvod.kolicina-=kolicina;
            printf("Cena: %.2f\n", kolicina*Proizvod.cena);
            fseek(file,(Proizvod.kod-1)*sizeof(Hardware),SEEK_SET);
            fwrite(&Proizvod,sizeof(Hardware),1,file);
        }
        else
            printf("Vo momentov ne e dostapna taa kolicina\n");
    }
}
