#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



    int mult(int n, int a, int b, int i){
        if (a > b){
        return i;
        }
        else if(a % n == 0){
        printf("%d\n", a);
        i=i+1;
        }
        mult(n, a+1, b, i);
    }

    int calc(int n, int a, int b){
        
        int marcador = mult(n, a, b, 0);
        if(marcador == 0){
        printf("INEXISTENTE\n");
        }
        else{return 0;}}


    int main(){
    int a,b,n;
    scanf("%d%d%d", &n, &a, &b);
    calc(n, a, b);
    return 0;
    }