#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int anos, resultado; 

    scanf ("%d", &anos);
    resultado = anos * 31536000;
    printf ("%d\n", resultado);

	return 0;
}