#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int rodadas( int quantas,int blocos, int cont){

    if (cont == quantas) return 0;

    int arrayp[4][4],move, i, j, le, ri, up;
    int don = 0;

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
         scanf("%d",&blocos);
         arrayp[i][j] = blocos;
        }
    }
    for (i=0; i<4 ; i++){
        
        if (((i == 3) && (j == 3)) && (move == 0)){
            printf("NONE");      
        }
        
        for (j=0; j<4; j++){
        
      
       if ((( arrayp[i][j] == arrayp[i+1][j]) || (arrayp[i+1][j] == 0)) && ((don< 1) && (arrayp[i][j] !=0))){
            
            printf("DOWN");
            move++;
            don++;
        }
        if ((( arrayp[i][j] == arrayp[i][j-1]) || (arrayp[i][j-1] == 0)) && ((le< 1) && (arrayp[i][j] !=0))){
            if (move >=1) printf(" ");
            printf("LEFT");
            move++;
            le++;
             
        }
        if ((( arrayp[i][j] == arrayp[i][j+1]) || (arrayp[i][j+1] == 0)) && ((ri< 1) && (arrayp[i][j] !=0))){
            if (move >=1) printf(" ");
            printf("RIGHT");
            move++;
            ri++;
        }
         if ((( arrayp[i][j] == arrayp[i-1][j]) || (arrayp[i-1][j] == 0)) && ((up< 1) && (arrayp[i][j] !=0))){
            if (move >=1) printf(" ");
            printf("UP");
            move++;
            up++;
        }
    
    }
    
    }
    
    return rodadas(blocos, quantas, cont+1);
}

int main (){

     int quantas, blocos;
     
    scanf("%d",&quantas);
    rodadas(quantas, 0, 0);


    return 0;
}