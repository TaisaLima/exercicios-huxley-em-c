#include <string.h>
#include <stdio.h>

// algoritmo para calcular a soma e todos os numeros de 1 a N

int soma ( int x ) {

    int resultado;

    if ( x == 1 ){
        return 1;
    }
     else {
        resultado = x + soma(x-1);
    }

    return (resultado);
}

int main (){
    
    int n, somatorio;

    scanf ("%d", &n);

    somatorio = soma (n);
    printf ("%d", somatorio);

    return 0;

}