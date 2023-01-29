#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calc(double antes[], double depois[], int i, int cont){

 
    if (i == 5){
        return cont;
    }
    if (antes[i]/depois[i]<= 0.8){
        cont++;
    }
    return ler (antes, depois, i+1, cont);
}

void ler(int antes[], int depois, int cont){

    if(cont == 5){
        return;
    }
    else{ 
        scanf("%lf\n", &antes[i]);
        scanf("%lf", &depois[i]);
        cont++;
        ler(num, cont, array);
    }

}

int main() {

    double antes[5], depois[5];
    int i=0, resultado;
    
    ler (antes, depois,0)
    resultado = calc(antes, depois, 0,0);
    printf("%d\n", resultado);

	return 0;
}