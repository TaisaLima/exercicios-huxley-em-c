#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calc ( int quant, char tam, int i, int capsulas){

    scanf ("%d %c", &quant, &tam);

    if ( i == 7){
        return capsulas;
    }
    if (tam == 'g' || tam == 'G'){

        capsulas = capsulas + (quant*16);
        calc(quant, tam,i+1, capsulas);}
    else if (tam == 'p' || tam == 'P'){

        capsulas = capsulas + (quant*10);
        calc(quant, tam,i+1, capsulas);
    }

    return 0;
}


int main(){

    int quant;
    char tam;

    int total = calc ( quant, tam, 0 , 0 );
    printf("%d\n%d", total, (total*2)/7);

    return 0;
}
