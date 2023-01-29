#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A,B,C;

    scanf ("%d", &A);
    scanf ("%d", &B);
    scanf ("%d", &C);

    if  ((A < B) &&(A < C)){
        printf("%d", A);
    }
    else if ((B < A) && (B < C)){
        printf("%d", B);
    }
    else if ((C==A) && (C < B)){
        printf ("%d", C);
    }
    else if ((C==B) && (C < A)){    
        printf  ("%d", C); 
    }
    else if ((B==A) && (C > B)){ 
        printf ("%d", B);
    }
    else
        printf("%d", C);

    
	return 0;
}
