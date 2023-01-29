#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hanoi(float *x, float *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}
void elbubble(float a[], int i, int tam)
{
    if(tam <= 2)
        return;
        
    if(i+1 == tam){
        elbubble(a, 0, tam - 1);
        return;}
    if(a[i] > a[i + 1])
        hanoi(&a[i], &a[i + 1]);
        elbubble(a, i + 1, tam);
}

int ler(int num, int cont, float array[]){

    if(num == cont){
        elbubble(array, 0, 4);
    }
    else{
        scanf("%f", &array[cont]);
        cont++;
        ler(num, cont, array);
    }
}

int main() {

    int array[6];
    
    int n = sizeof(arr) / sizeof(arr[0]);
    ler(n, 0, array);
    printf("%d\n%d", array[0], array[5]);
    
	return 0;
}
