#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calc(int n, int i, int t){
    if (i>t) {
        return n;
    }
    if (i%2 !=0){
        n+=3;
    }
    else {
        n += (n%5);
    }

    return calc (n, i + 1, t);
}

int main(){
    int n, i,t;

    scanf("%d %d", &n, &t);
    int resultado = calc(n, 0, t);


    printf("%d\n", resultado);
    
    return 0;
}