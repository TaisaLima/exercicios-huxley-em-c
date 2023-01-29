#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int mdc(int a, int b){


    if ( a == 0) {
        return b;
    }
    else  { 
        return mdc( b % a, a);
    }
    
}
int loop (int x, int y){
    
    int a,b;

    scanf ("%d%d",&a,&b);

   if (x == y){
        printf("MDC(%d,%d) = %d\n", a, b, mdc(a, b));
        return 0;
    }
    else {
        
        printf("MDC(%d,%d) = %d\n", a, b, mdc(a, b));
        return loop(x, y+1);
    }

    
}

int main() {

    int n;
    int cont = 1;
    scanf("%d", &n);
    loop(n,cont);
    return 0;
}