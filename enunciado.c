#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int seq (int num){


    if (num == 1){
        return 0;
    }
    if (num % 2 == 0 ){
        num = num/2;
        printf("%d ", num);
    }
    else if (num %2!=0 ){
        num = (num*3) +1;
        printf("%d ", num); 
    }

    return seq (num);
}

int main (){

    int n, y;
    scanf ("%d", &n);
    seq(n);

    return 0;
}
