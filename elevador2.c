#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calc (int andares, int limite, int passou, int pessoas){
    
     int saem, entram;

    if (andares == 0){
        if (passou == 0){
            printf("N");
        }
        else{
            printf("S");
        }
    }
    else {
        scanf ("%d%d", &saem, &entram);
        pessoas-=saem;
        pessoas+=entram;
        if (pessoas > limite){
            return calc (andares-1, limite, passou+1, pessoas);}
        else {
            return calc (andares-1, limite, passou, pessoas);}
    }
}

int main (){

    int andares, limite;
    int pessoas = 0;
    scanf ("%d%d", &andares, &limite);
    calc(andares, limite, 0,pessoas);

    return 0;
}