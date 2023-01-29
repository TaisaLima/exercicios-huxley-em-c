#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 256


char* normal(char str1[]){

    return (str1);

}

char* Inverte(char str1[])
{
    static int i=0;
    static char str_inv[MAX];
    if(*str1)
    {
         Inverte(str1+1);
         str_inv[i++] = *str1;
    }
    return (str_inv);
}




int main(){
    int sub, cont=0, i, j, tam, comp1,comp2;
    char palavra[MAX], palavrainv[MAX];
    char *str_inv, *str_normal;

    scanf("%s", palavra);


    tam= strlen(palavra);
    str_normal = normal(palavra);
    str_inv = Inverte(palavra);
    

    for (j=0; j<tam; j++){
        
        if (str_normal == str_inv) {
            cont++;
        }

    }
    
    
    if (cont >= 1) printf("SIM\n%d", tam);
    
  
    else
    
    printf("NAO");

    return 0;
}