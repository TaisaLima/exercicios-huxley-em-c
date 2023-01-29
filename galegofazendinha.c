#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int fatorial(int n, int x){

    int i, fat;

    if (n <=1) {
        return 1;
    }
    else {
        return (n * fatorial(n-1));
    }
}

int primo(int i, int div)
{
    if (i == div)
    {
        return 1;
    }
        
    else if (i % div == 0 || i == 1 || i == 0)
    {
        return 0;
    }
    else 
    {
        div += 1;
        primo(i, div);
    }
}

int proximo_primo(int y)
    {
        int primo =primo(y, 2, 0);
        if(primo == 0)
        {
            proximo_primo(y + 1);
        }
        else
        {
            return y;
        }
    }

    
    
double calculo(int n, int valor_um, double quantidade)
{
    double resultado, fato;

    int primo = primo(valor_um, 2, 0);
    if(primo == 0)
    {
        resultado = proximo_primo(valor_um + 1);
    }
    if(primo == 1)
    {
        resultado = valor_um;
    }

    fato = fatorial(valor_um, valor_um - 1);
    fato /= resultado;
    quantidade += fato;

    if(valor_um < n)
    {
        printf("%d!/%.lf + ", valor_um, resultado);
    }
    if(valor_um == n)
    {
        printf("%d!/%.lf\n", valor_um, resultado);
        return quantidade;
    }
        calculo(n, valor_um + 1, quantidade);
}
int main()
{
    double n;
    scanf("%lf" , &n);
    if(n == 0)
    {
        printf("0.00\n");
        return 0;
    }
    else
    {
        printf("%.2lf\n" , calculo(n, 1, 0));

    }
    return 0;
}