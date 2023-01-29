#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int mdc(int a, int b){


    if ( a== 0) {
        return b;
    }
    else  { 
        return mdc
    ( b % a, a);
    }
    
}
int loop (){
int n,a,b;

    scanf ("%d%d",&a,&b);
    
    
    printf("%d\n", mdc(a, b));
}

int main() {

    int n;
    loop (n);

    return 0;
}