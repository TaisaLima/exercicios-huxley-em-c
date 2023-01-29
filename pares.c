#include <stdio.h>

int contad(int x){

   int cont, k=0;


   if (x<=0){
    return 0;
    }
    else {
        cont = x%10;
        x = x/10;
        k+= contad(x);
        

    }
    
    if (cont%2 == 0){
        k++;
    }    
    
    return k;
}

int main () {

    int n; 

    scanf ("%d", &n);
    printf("%d", contad(n));
    
    return 0;
}