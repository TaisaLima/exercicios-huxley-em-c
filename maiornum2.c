#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loop (int i,int numero){
   
    scanf ("%d\n", &numero);

    if (numero == 0) {
        printf ("%d", i);
        return 0;
    }
    else {
        if (numero > i){
            i = numero;
        }
    }
    return loop( i,0);
}

int main() {
    loop(0,0);
    return 0;
}
  