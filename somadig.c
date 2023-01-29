#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cod(int num, int soma){ 
    
    if(num < 10){
        printf("%d", soma + num);
        return 0;
    }
    else{
        soma += num%10;
        cod(num/10, soma);
    }
    
}

int ler(int num, int cont, int array[]){

    if(num == cont){
        int n1;
        scanf("%d", &n1);
        cod(array[n1], 0);
    }
    else{
        scanf("%d", &array[cont]);
        cont++;
        ler(num, cont, array);
    }

}

int main() {

    int num;
    scanf("%d", &num);
    int array[num];
    
    ler(num, 0, array);
    
	return 0;
}