#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void meshaj(int wDeck[][13]){
    int row, column, card;

    for (card=1;card<=52;card++){
        do {
            row=rand()%4;
            column=rand()%13;
        } while(wDeck[row][column]!=0);
        wDeck[row][column]=card;
    }
}

void deli( const int wDeck[][13], const char *wFace[], const char *wSuit[] ){
    int card, row, column, i, j, count_cards, count_pairs, colour=1, counter=0, kenta;
    char *face[5], *suit[5];
    int *faces[13]={0}; // niza vo koja za sekoja prisutna brojka, soodvetno ke bide zgolemen nejzinot indeks

    for (card=1;card<=5;card++){
        for (row=0;row<=3;row++){
            for (column=0;column<=12;column++){
                if (wDeck[row][column]==card){ // ako mestoto ja sodrzi tekovnata karta, prikazi ja kartata
                    printf("%8s %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t' );
                    face[counter]=wFace[column];
                    suit[counter]=wSuit[row];
                    counter++;
                }
            }
        }
    }

    for(i=0;i<5;i++){
        count_cards=1;
        for(j=i+1;j<5;j++){
            if(face[i]==face[j])
                count_cards++;
        }
        if(count_cards==2){
            printf("\nImate par\n");
            count_pairs++;
        }
        else if(count_cards==3)
            printf("Imate triling\n");
        else if(count_cards==4)
            printf("Imate 4 karti so ist broj\n");
    }

    if(count_pairs==2)
        printf("Imate dva para\n");

    for(i=0;i<5;i++){
        if(suit[0]!=suit[i]){
            colour=0;
            break;
        }
    }
    if(colour==1){
        printf("Site karti se od ista boja\n");
        //ako se ista boja ima smisla da proveruvame kenta
        kenta=0;
        for (i=0;i<13;i++) {
            faces[*wFace[i]]++;
        } // dobivame niza vo koja na soodvetnata indeks pozicija za brojkata imame podatok kolku pati taa se naogja vo rakata
        for (i=0;i<13-4;i++) {
            if (faces[i] && faces[i+1] && faces[i+2] && faces[i+3] && faces[i+4]){
                //ova moze da bide ispolneto samo ako 5te karti se razlicni i istite se podredeni
                kenta=1;
                break;
            }
        }
        if(kenta==1)
            printf("Imate kenta\n");
    }
}

int main()
{
    const char *boja[4] = { "Srce", "Karo", "List", "Detelina" };

    const char *brojka[13] =
        { "As", "Dva", "Tri", "Chetiri",
         "Pet", "Shest", "Sedum", "Osum",
         "Devet", "Deset", "Dzandar", "Dama", "Pop" };

    int spil[4][13]={0};

    srand(time(0));

    meshaj(spil);
    deli(spil, brojka, boja);

    return 0;
}
