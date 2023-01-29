#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 13001

int repetido(int array[], int soma, int i){

    if (i == MAX){
        return soma;
    }
    if (array[i] == 15){
        soma += i;
    }
    repetido (array, soma, i+1);

}

void ler(int maria[],int  joao[], int i, int num, int scan, int m, int j){

    if(i == num ){
        printf("%d\n%d\n", j, m);
        return;
    }
    else {
        scanf("%d\n", &scan);
        if (scan%2 == 0){
            maria[scan] = 15;
            m++;
        }
        else {
            joao[scan] = 15;
            j++;
        }
        ler(maria, joao, i+1, num, 0, m, j);
    }
}

int main(){

    int maria[MAX], joao[MAX], num, m, j, de_maria, de_joao; 
    scanf("%d", &num);
    
    ler(maria, joao, 0, num, 0, m ,j);

    de_maria = repetido(maria, 0,0);
    de_joao = repetido (joao, 0, 0);


    

    if (de_maria > de_joao){
        printf("%d\n", de_maria);
    }
    else {
        printf("%d\n", de_joao);
    }
    return 0; 

   
}


