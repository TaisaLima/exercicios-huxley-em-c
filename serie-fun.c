#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int fatorial(int n, int x)
    {
        if(n == 1)
        {
            return n;
        }
        n *= x;
        x -= 1;
        if(x <= 1)
        {
            return n;
        }
        fatorial(n, x);
    }

double ehprimo(int n,int i, int x)
{
    if(n % i == 0)
    {
        x+= 1; 
    }
    if(x > 1){
        return 0;
    }
    
    i += 1;

    if(i <= n){
        ehprimo(n, i, x);
    }
    else{
        return 1;
    }
}

int proximo_primo(int y){
    
    
        int primo;
        primo = ehprimo(y, 2, 0);
        if(primo == 0){
            proximo_primo(y + 1);
        }
        else{
            return y;
        }
    }

    
    
double calc(int n, int valor_um, double quant)
{
    double resul, fator;

    int primo = ehprimo(valor_um, 2, 0);
    if(primo == 0){
        resul = proximo_primo(valor_um + 1);
    }
    if(primo == 1){
        resul = valor_um;
    }

    fator= fatorial(valor_um, valor_um - 1);
    fator/= resul;
    quant += fator;

    if(valor_um < n){
        printf("%d!/%.lf + ", valor_um, resul);
    }
    if(valor_um == n){
        printf("%d!/%.lf\n", valor_um, resul);
        return quant;
    }
        calc(n, valor_um + 1, quant);
}
int main(){
    double n;
    scanf("%lf" , &n);
    if(n == 0){
        printf("0.00\n");
        return 0;
    }
    else{
        printf("%.2lf\n" , calc(n, 1, 0));
    }
    return 0;
}