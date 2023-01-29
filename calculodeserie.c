
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

double calc (int i, double soma , int parada){

    double numerador=0;
    double  denominador=0;
    
    if (i == parada){
        return soma;
    }
    if (i %2 == 0){
        numerador = i+1;
        denominador = pow(2, i);
      
    }else{
        numerador = pow(2,i);
        denominador = 3* (i+1)/2;
    }

    soma +=(numerador/denominador);

    return calc (i+1, soma, parada);

}

int main(){

    int  num;
    double resultado; 
    scanf("%d", &num);
   
    resultado = calc(0, 0, num);

    printf ("S: %.2lf\n", resultado);

    return 0;
}

