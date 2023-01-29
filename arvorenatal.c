#include <string.h>
#include <stdio.h>

int main (){
    int arvore, enfeite1,enfeite2,enfeite3;
    double calc, preco1, preco2, preco3;

    scanf("%d",&arvore);
    scanf ("%d\n%lf",&enfeite1, &preco1);
    scanf ("%d\n%lf",&enfeite2, &preco2);
    scanf ("%d\n%lf",&enfeite3, &preco3);

    calc = ((enfeite1*preco1 + enfeite2*preco2 + enfeite3*preco3) + arvore);
    printf("%0.2lf\n%0.2lf",calc, calc/21);
    return 0;
}