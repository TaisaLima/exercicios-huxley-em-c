#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 101
#define cout(x) printf("%d", x)
#define endl printf("\n")
#define PRINTARRAY(array, length) for(int i = 0; i < length; i++) printf("%d ", array[i]);
#define SCANARRAY(array, length) for(int i = 0; i < length; i++) scanf("%d", &array[i]);



void bubble_sort(int arr[], int l, int r)
{
    if (r == 1) 
        return;
 
    if (l + 1 == r) 
        return bubble_sort(arr, 0, r - 1);
 
    if (arr[l] > arr[l + 1]) 
    {
        int aux = arr[l];
        arr[l] = arr[l + 1];
        arr[l + 1] = aux;
    }
    
    return bubble_sort(arr, l + 1, r);
}

void ler(int arrayp[], int scan, int i){
    
    if(scanf("%d", &scan == EOF)) return;
    else {

        scanf("%d", &scan);
        if (scan%2 != 0){
           arrayp[i] = scan;
           
        }
       
        ler(arrayp, scan, i+1);
    }
}



}


int main (){

    int arrayp[max];

    ler (arrayp,0,0);
    bubble_sort(arrayp,0, 100);
    printf("array




    return 0;
}