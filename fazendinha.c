#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




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


int fatorial(int n){

    int i, fat;

    if (n <=1) {
        return 1;
    }
    else {
        return (n * fatorial(n-1));
    }
}



int mdc(int a, int b){


    if ( a== 0) {
        return b;
    }
    else  { 
        return mdc ( b % a, a);
    }
    
}

int somadigfat( int x, int y){

    if (x==0){
        return y;
    }
    else {
        y = (x%10) + y;
        return somadigfat(x/10, y);
    }
}

int divisor (int x,int y){

    if (x%y == 0){
        return 1;
    }
    else{
        return 0;
    }

}



double decisao (double x, double y, double z, double w){
    
    
    
    if (w == 1){
        z = z - (z*0.5);
    }
    if (ceil (z >= y)){
        return 1;
    }
    else {
        return 0;
    }
}



double ordem(int dia, double prod_caloria, double prod_ordep, int tirar){


    if (tirar == 1){
        prod_ordep = (prod_ordep*0.1);
    }

    if  (divisor((prod_ordep*dia),somadigfat(fatorial(dia),0)) == 1){
        prod_ordep = (prod_ordep * dia) + 30;
    }
    if (mdc(prod_ordep, dia) == 1){
        prod_ordep = (prod_ordep*dia)+ (prod_caloria* 0.1);
        tirar = 1;
    }

    return decisao (dia, prod_caloria, prod_ordep, tirar);
}





double caloria(int dia, double prod_caloria,double prod_ordep, double tirar){

    double prod1, prod_caloria2;

     if (primo(dia, dia/2) == 1 ){
        prod1= (prod_caloria* dia) + (prod_caloria*0.05);
     }
     if (primo(somadigfat(fatorial(dia),0),(somadigfat(fatorial(dia),0))/2) == 1){
        prod_caloria2 = (prod_caloria* dia) + (prod_ordep * 0.1);
        tirar = 1; 
    }

    prod_caloria = prod1+ prod_caloria2;

    return ordem(dia,prod_caloria, prod_ordep,tirar);

}




double battle(double dias, double prod_caloria ,double prod_ordep){


    if (dias == 1){

        if ( (caloria (dias, prod_caloria,prod_ordep, 0)) == 1) {
            printf("Kcaj Ganhou!\n%d",prod_caloria);
        }
        else {
            printf("Ordep Ganhou!\n%d",prod_ordep);
        }
    }
    else {
        return battle (dias-1, prod_caloria, prod_ordep);
    }


}


int main(){

        double dias, prod_ordep, prod_caloria;
        scanf("%lf%lf%lf", &dias, &prod_caloria, &prod_ordep);
        battle(dias, prod_caloria, prod_ordep);
        return 0;
}