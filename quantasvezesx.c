#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

calc( int x, int array[],int indice, int i){

        if (indice == 10){
            printf("%d",i);
        }
        else{
            if (array[indice] == x){
                i++;
                return calc(x,array, indice+1, i);
            }
            else {
                return calc(x,array, indice+1, i);
            }

        }
}

int main() {

    int x,c, i=0;
    int mod[10];
    scanf("%d%d%d%d%d%d%d%d%d%d", &mod[i],&mod[i+1], &mod[i+2], &mod[i+3], &mod[i+4], &mod[i+5],&mod[i+6],&mod[i+7],&mod[i+8], &mod[i+9]);
    
    scanf ("%d", &x);
    c= calc(x,mod, 0, i);
    printf("%d", c);
	return 0;
}