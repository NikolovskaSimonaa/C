#include <stdio.h>

int main()
{
    int niza[12], i;
    float x, y, z;
    int delta_x, delta_y, delta_z, delta;
    printf("Vnesi koeficienti na ravenkite (a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3):\n");
    for(i=0;i<12;i++){
        scanf("%d", &niza[i]);
    }

    //Kramerovo pravilo
    delta=(niza[0]*niza[5]*niza[10])+(niza[1]*niza[6]*niza[8])+(niza[2]*niza[4]*niza[9])
            -(niza[2]*niza[5]*niza[8])-(niza[0]*niza[6]*niza[9])-(niza[1]*niza[4]*niza[10]);
    delta_x=(niza[3]*niza[5]*niza[10])+(niza[1]*niza[6]*niza[11])+(niza[2]*niza[7]*niza[9])
              -(niza[2]*niza[5]*niza[11])-(niza[3]*niza[6]*niza[9])-(niza[1]*niza[7]*niza[10]);
    delta_y=(niza[0]*niza[7]*niza[10])+(niza[3]*niza[6]*niza[8])+(niza[2]*niza[4]*niza[11])
              -(niza[2]*niza[7]*niza[8])-(niza[0]*niza[6]*niza[11])-(niza[3]*niza[4]*niza[10]);
    delta_z=(niza[0]*niza[5]*niza[11])+(niza[1]*niza[7]*niza[8])+(niza[3]*niza[4]*niza[9])
              -(niza[3]*niza[5]*niza[8])-(niza[0]*niza[7]*niza[9])-(niza[1]*niza[4]*niza[11]);

    if(delta!=0){
        x=(float)delta_x/delta;
        y=(float)delta_y/delta;
        z=(float)delta_z/delta;
        printf("Resenie:: x=%.2f y=%.2f z=%.2f\n", x, y, z);
    } else
        printf("Sistemot ili nema resenie ili ima beskonecno mnogu resenija\n");

    return 0;
}
