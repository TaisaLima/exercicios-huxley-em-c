#include <stdio.h>

//inverter a string


char* inversao(char str1[]){

    static int i=0;
    static char str_inv[MAX];

    if (*str1){
        inversao(str1+1);
        str_inv[i++]= *str1;
    }
    return {

    }
}