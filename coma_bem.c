#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float consumo, gorjeta, conta ; 

    scanf ("%f", &consumo);
    gorjeta = consumo/10;
    conta = consumo + gorjeta;

    printf ("%0.2f", conta);

	return 0;
}