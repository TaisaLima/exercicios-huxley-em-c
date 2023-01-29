#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int calc(int x, int r, int y){

        if(y > x){
            return r;
        }

        else{
            if((x % y == 0) && (y%3 == 0)){
                return calc(x, r+1, y+1);
            }
            else {
                return calc(x, r , y+1);
            }
        } 
    }

    int main(){
        int numero;
        scanf("%d", &numero);

        
        int res =calc(numero, 0, 1);

        if (res != 0 ){printf("%d", res);}
        else { printf("O numero nao possui divisores multiplos de 3!\n");}
        return 0;
    }

