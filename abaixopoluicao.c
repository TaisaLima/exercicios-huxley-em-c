#include <string.h>
#include <stdio.h>

int loop (int casas, double multa){
    int numero;

    scanf ("%d", &numero);

    if (numero == 999) {
        printf ("%0.2lf\n%d", multa, casas);
        return 0;
    }
    else {
        if (numero <= 2){
            return loop (casas, multa);
        }
        else {
            return loop ( casas+1, multa+ (12.89 * (numero-2)));
        }
         
    }

}

int main() {

    loop(0,0);
    return 0;
}