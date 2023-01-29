#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


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
int learray(double arr[], int i, int tam)
{
    if(i >= tam){
        return elbubble(arr,0,4);
    }
    scanf("%lf", &arr[i]);
    learray(arr,i+1, tam);
}

int main() 
{
    double arr[4];
    learray(arr,0,4);

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf",arr[0], arr[2],arr[3], arr[1]);
    
	return 0;
}