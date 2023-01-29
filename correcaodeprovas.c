#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 20

void ler(int tuneis[],int num, int i, int ind){

    int leitura, tunel;
    if(num == 0 ){
        return;
    }
        scanf("%d", &para);
            if (para == 9999){
                return;
            }
        
        scanf(" %s", &leitura);
        tuneis[i] = leitura;
        ler(tuneis, num-1, i+1, ind);
    
}
int corrigesla(char provas[] )

int main(){

    char provaprof[MAX],  provaalunos[MAX], pontos[MAX];
    int num; 
    
    ler(provaprof,10, 0, 0);
    ler(alunos, 10, 0, 0 );
    

    return 0;
}
