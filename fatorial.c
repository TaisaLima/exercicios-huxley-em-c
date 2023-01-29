#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int fatorial(int n){

    int i, fat;

    if (n <=1) {
        return (1);
    }
    else if(n > 12) { 
        return 1;
    }
    else {
        return (n * fatorial(n-1));
    }
}

void loop (){
    int numero;

    scanf ("%d", &numero);

    if (numero == -1) {
         return ;
    }
    else {
       
        printf ("%d\n", fatorial(numero));
        loop();
         
    }

}

int main() {

    loop();
    return 0;
}