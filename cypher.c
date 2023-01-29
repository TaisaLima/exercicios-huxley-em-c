#include <string.h>
#define PRINTARRAY(array, length) for(int i = 0; i < length; i++) printf("%d ", array[i]);


int main (){
    char position;
    int numero, wheels, i,j, k,l, cima, baixo, movimentacoes, calculate, indice;
    int listagem[10]= {0,1,2,3,4,5,6,7,8,9};

    scanf ("%d",&numero);

    for (i=0 ; i< numero ; i++){
        scanf ("%d",&wheels);
        int initial[wheels], result[wheels];

            for(j=0, j< wheels ; j++){
                scanf ("%d",&initial[j]);
            }

            for(k=0, k< wheels ; k++){

                scanf ("%d",&movimentacoes);
                
                for (l=0, l< movimentacoes ; l++){
                    scanf ("%c",&position);
                        if (position == 'U') cima++;
                        if (position == 'D') baixo++;                   
                }
                calculate = baixo - cima;
                indice = initial[k] + calculate;
                result[k] = listagem[calculate%10];
                PRINTARRAY (result, k);    
            }
    }
    return 0;
}