#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calc(int trian, int num){
 
    if ( num * (num+1) * (num+2) > trian){
    printf("Falso");
    return;
 }

 
 if ( num * (num+1) * (num+2) == trian){
    printf("%d * %d * %d = %d\n", num, num+1,num+2, trian);
    printf ("Verdadeiro");
    return;
 }
     return calc(trian, num +1);
}

int main(){
    int trian, num =1;
    
    scanf("%d", &trian);
    calc(trian, num);

    return 0;
}