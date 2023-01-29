
#include <stdio.h>



void swap(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}


int* sort(int a[], int i, int size)
{
    if(size == 0)
        return a;

    if(i == size)
    {
        
        return sort(a, 0, size - 1);
    }
    if(a[i] > a[i + 1]){
        swap(&a[i], &a[i + 1]);
        sort(a, i + 1, size);
        i++;
    }
    return 0;
}


int aux (int marks[], int i){
    
    if (i == 0) {
        return marks[];
    }
    else {
        scanf ("%d", &marks[i]);
        return aux (marks, i-1);
    }
    return 0;
}


int main(){

    int arr[6];
    aux(arr, 6);
    sort(arr, 0, 6);
    printf("%d%d",arr[0], arr[5]);

    return 0;
}