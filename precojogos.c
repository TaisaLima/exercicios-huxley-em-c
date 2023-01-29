#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double ano (int dif, double price, int year ){

double discount;
double discounts[] = {0.25, 0.2, 0.18,0.15,0.12,0.1};

   if (year == 0)
    return price;
    if (price <= 45){
        return price;
    }
   if ((price <= 100) && (price > 45)){
        discount = price - ((discounts[dif]/2)*price);
        if (discount <= 45){
            return 45;
        }
        else {
            return ano(dif, discount, year-1);
        }
    }
   
    else {
        discount = price - (discounts[dif]*price);
        if (discount<= 45){
            return 45;
        }
        else {
            return ano(dif, discount, year-1);
        }
    }
}

int ler (jogos, i){
    int dif;
    double price, tot;

    if (i == jogos){return 0;}

        scanf("%d %lf\n", &dif, &price);
        tot = ano (dif, price, 3);
        printf("Jogo[%d] = R$%0.2lf\n", i, tot);
        return ler (jogos, i+1);
}

int main() {

    int i;
    scanf("%d", &i);
    ler (i, 0);

	return 0;
}
