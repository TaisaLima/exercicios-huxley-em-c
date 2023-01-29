#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 1503

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void sort(int i, int j, int arr[], int limit) {
    if(i >= limit) return;
    if(j >= limit) return sort(i + 1, i + 2, arr, limit);
    if(arr[i] > arr[j]) swap(&arr[i], &arr[j]);
    sort(i, j + 1, arr, limit);
}


int primo(int x, int y){

        if (y == 1){
            return 1;
        }
        else if ((x == 0) ||(x==1) || (x%y == 0) ) {
            return 0;
        }
        else { 
            return primo(x, 1);
        }
     
    return 0;
}


int mdc(int a, int b){


    if ( a== 0) {
        return b;
    }
    else  { 
        return mdc ( b % a, a);
    }
    
}

int proximo_primo(int y){
        int primo =primo(y, 2, 0);
        if(primo == 0){
            proximo_primo(y + 1);
        }
        else{
            return y;
        }
}


int somadig( int x, int y){

    if (x==0){
        return y;
    }
    else {
        y = (x%10) + y;
        return somadig(x/10, y);
    }
}

int verificador( kcaj[], ordep[], int i){

    int pontok, pontop, fatorp_k, fatorp_p, centro;

    centro = (i)/2;

    fatorp_k = kcaj[0] + kcaj[i-1] + kcaj[centro];
    fatorp_p = ordep[0]+ ordep[i-1] + ordep[centro];

        if (primo(fatorp_k, (fatorp_k/2))== 1){
            pontok++;
        }
        if (mdc(kcaj[0], kcaj[i])== 1){
            pontok++;
        }
        if ( primo  (somadigfat(proximo_primo(fatorp_k),0) ,   (somadigfat(proximo_primo(fatorp_k),0))/2  )  == 1){
            pontok++;
        }

        if (primo(fatorp_p, (fatorp_p/2))== 1){
           pontop++;
        }
        if (mdc(kcaj[0], kcaj[i])== 1){
           pontop++;
        }
        if ( primo  (somadigfat(proximo_primo(fatorp_p),0) ,   (somadigfat(proximo_primo(fatorp_p),0))/2  )  == 1){
           pontop++;
        }

        if (pontop> pontok){
            printf("Ordep %d\n", fatorp_p);
        }
        if (pontop < pontok){
            printf("Kcaj %d\n", fatorp_p);
        }
        else {
            printf ("empate\n");
        }
    return 0;
}

void partida(int ordep[],int  kcaj[], int i, int num, int scan){

    if(num == 0){
        elbubble(kcaj, 0, i);
        elbubble(ordep, 0, i);
        verificador (kcaj, ordep,i);
        return;
    }
    else {
        scanf("%d\n", &scan);
        if (scan > 1500){
            printf("valor fora do limite!");
            return;
        }

        if (i%2 == 0){
            kcaj[i] = scan;
            
        }
        else {
            ordep[i] = scan;
        }
        ler(ordep, kcaj, i+1, num-1, 0, m, j);
    }
}

void rodadas(num){
    int ordep[MAX], kcaj[MAX], rolardados;

    if (num == 0){
        return;
    }
    scanf("%d", &rolardados);
    partida(ordep, kcaj, 0,rolardados*2, 0);
    rodadas (num-1);

}

int main(){

    int num, m, j, de_ordep, de_kcaj; 
    scanf("%d", &num);
    rodadas(num);

    return 0;
}