#include <stdio.h>


int aux (int cont, int i){

    int marks[10], sum;
    
    if (cont-1 < i) {
        return sum += marks[i];
    }
    else {
        printf("Enter number %d: ",i+1);
        scanf ("%d", &marks[i]);
        i++;
        return aux (cont, i);
    }
    return 0;
}


int main(){

    int n;
    double soma, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    soma = aux(n, 0);

    average =  soma / n;

    printf ("average = %.2lf\n", average);


    return 0;
}