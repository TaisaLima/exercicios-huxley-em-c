#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 30

int qual (int tunel[],int ind, int i){

    if (i==0){
        qual (tunel, 0, ind );
    }
    if (tunel[ind]== -1){
        return ind;
    }
    qual(tunel, ind+1, i-1);
    
}

void ler(int tuneis[],int num, int i, int ind){

    int leitura, tunel;
    if(num == 0 ){
        scanf("%d\n", &ind);
        tunel  =  qual(tuneis, ind, i);
        printf("%d", tunel);
        return;
    }
        scanf("%d\n", &leitura);
        tuneis[i] = leitura;
        ler(tuneis, num-1, i+1, ind);
    
}

int main(){

    int tuneis[MAX],  num; 
    scanf("%d", &num);
    
    ler(tuneis, num,0,0);

    return 0;
}
