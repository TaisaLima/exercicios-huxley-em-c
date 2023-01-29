#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int battle(int vida_c, int vida_b ,int dano_c ,int dano_b){
    
         if (vida_c == 0){
        
            return 1;
        }
        else if (dano_c >= vida_b ){
      
            return 0;

        else {
            return battle(vida_c-dano_b,vida_b,dano_c+50, dano_b );
        }

}    


    \n

// escaneia as rodadas até acabar os num? ou é melhor escanear toda vez e printar logo? hmmm
int loop (int x,int y){

int v1,v2,d1,d2;

    if (x == y){
        if ( battle(v1,v2,d1,d2) == 0){
            printf("Clodes\n");
        }
        else {
            printf("Bezaliel\n");
        }
        return 0;
    }
    else {
        if ( battle(v1,v2,d1,d2) == 0){
            printf("Clodes\n");
        }
        else {
            printf("Bezaliel\n");
        }
        return loop (x, y+1);
    }
    return 0;
}

    int main() {

        int n;
        scanf("%d", &n);
        loop (n, 1);
        return 0;
    }
    