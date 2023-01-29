#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int calc(int x, int y){

        if (y == 1){
            return 1;
        }
        else if ((x == 0) ||(x==1) || (x%y == 0) ) {
            return 0;
        }
        else { 
            return calc(x,y-1);
        }
     
    return 0;
}


void loop(){
    
    int num;
    scanf ("%d",&num);

        if (num == -1){
            return ;
        }
        else {
            printf ("%d\n", calc(num, num/2));
            loop();
        }
    return ;
     
}

int main( ){

    loop();
    return 0;
}
