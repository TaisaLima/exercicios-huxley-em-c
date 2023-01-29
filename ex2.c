#include <stdio.h>


//conte os dígitos de um determinado número usando recursão

int digitos(int x){

    static int cont = 0;

    if (x != 0){
        cont++;
        digitos (x/10);
    }
    
    return cont; 

}




int main (){
     
    int num, quantos;

     scanf("%d", &num);

    quantos = digitos (num);
    
   
    printf("%d", quantos);

    return 0;
    
}