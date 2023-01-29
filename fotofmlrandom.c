#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ler(int num, int cont, float array[]){

    if(num == cont){

        scanf("%d", &n1);
        elbubble(array[n1], 0, 4);
    }
    else{
        scanf("%d", &array[cont]);
        cont++;
        ler(num, cont, array);
    }
}

void hanoi(double *x, double *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}
void elbubble(double a[], int i, int tam)
{
    if(tam == 0)
        return;
    if(i == tam){
        elbubble(a, 0, tam - 1);
        return;}
    if(a[i] > a[i + 1])
        hanoi(&a[i], &a[i + 1]);

    elbubble(a, i + 1, tam);
}

int main() 
{
    float arr[4];
    le(0,4,arr);
    elbubble(arr,0,3);
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf",arr[0], arr[2],arr[3], arr[1]);
    
	return 0;
}