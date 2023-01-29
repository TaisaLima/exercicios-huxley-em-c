#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    double dolar,icms, produtodol,produtoreais, frete_dol,temfrete, vtotal,totalimpostos;
    
    scanf("%lf\n",&dolar);
    scanf("%lf\n", &icms);
    scanf("%lf\n",&produtodol);
    scanf("%lf",&frete_dol);

    produtoreais = dolar*produtodol;


    if (produtodol >= 2500){
        vtotal = (((produtodol+ (produtodol*0.6)))/(1-(icms*0.01)))*dolar;
        temfrete =0;
        totalimpostos=(produtoreais*0.6)+(vtotal*icms*0.01);
    }
    else {
        vtotal = (((produtodol+frete_dol+(produtodol+frete_dol)*0.6))/(1-(icms*0.01)))*dolar;
        temfrete =1;
        totalimpostos=((produtoreais+frete_dol*dolar)*0.6)+(vtotal*icms*0.01);
    }
    
    printf("%0.2lf\n", dolar); //(Cotação do dolar)
    printf("%0.2lf\n", produtoreais );//Valor do produto (em reais)
    printf("%0.2lf\n", dolar*frete_dol);//Valor do fretedol (em reais)
    printf("%0.2lf\n", produtoreais+frete_dol*dolar);//(Valor do fretedol + Valor do produto)
    
    

    if (temfrete== 1){
        printf("%0.2lf\n", (produtoreais+frete_dol*dolar)*0.6);//impostos de importação
        printf("%0.2lf\n", vtotal*icms*0.01);//Valor de icms
        printf("%0.2lf\n", totalimpostos);//Total de Impostos (Importação + ICMS)
        printf("%0.2lf\n", vtotal);//Total a pagar
        printf("Impostos calculados com o frete");
    }else {
        printf("%0.2lf\n", (produtoreais)*0.6);//impostos de importação
        printf("%0.2lf\n", vtotal*icms*0.01);//Valor de icms
        printf("%0.2lf\n", totalimpostos);//Total de Impostos (Importação + ICMS)
        printf("%0.2lf\n", vtotal+frete_dol*dolar);//Total a pagar
        printf("Impostos calculados sem o frete");
    }


	return 0;
}
