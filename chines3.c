#include <stdio.h>

int euclides(int a, int b){


    if ( a == 0) {
        return b;
    }
    else  { 
        return euclides( b % a, a);
    }
}
int possibilidade(int a[], int b)
{
    for (int x = 0; x < b; x++)
    {
        for (int y = x + 1; y < b; y++)
        {
            if (euclides(a[x], a[y]) != 1) {
                return 1;
            }
        }
    }
    return 0;
}
    

int calculo(int num[], int rem[], int k)
{
    int x = 1;
    while (1)
    {
        int j;
        for (j = 0; j < k; j++ ){
            if (x % num[j] != rem[j]){
                    break;}
        }
        if (j == k){
            return x;
        }
        x++;
    }
    return x;
}

int main(){
    int resto[3], mod[3];
    int i=0;
    scanf("%d%d%d", &mod[i],&mod[i+1], &mod[i+2]);
    scanf("%d%d%d", &resto[i],&resto[i+1], &resto[i+2]);
    if (!possibilidade(mod, 3)) {
        printf("x = %d\n", calculo(resto, mod, 3));}
    else {
        printf("O sistema dado nao tem solucao.\n");}
 
    return 0;
}