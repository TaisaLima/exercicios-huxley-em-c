int main(){ 
    
    float litros,alcool,gasolina,diesel,preco,desconto,conta;
    char combustivel, G,A,D;
    scanf ("%f %c", &litros, &combustivel);
   
	if (combustivel == 'A'){
		preco = 1.9;

        if (litros < 20){
            desconto = (preco * litros)*0.03;
            conta = (preco * litros) - desconto;
            printf("R$ %0.2lf",conta);
        }
        else if (litros > 20){
            desconto = (preco * litros)*0.05;
            conta = (preco * litros) - desconto;
            printf("R$ %0.2lf",conta);
        }
	}
    else if (combustivel == 'G'){
        preco = 2.5;

        if (litros <20){
            desconto = (preco * litros)*0.04;
            conta = (preco * litros) - desconto;
            printf("R$ %0.2lf",conta);
        }
        else if (litros > 20){
            desconto = (preco * litros)*0.06;
            conta = (preco * litros) - desconto;
            printf("R$ %0.2lf",conta);
    }
    }
    else if (combustivel =='D'){
        preco = 1.66;

        if (litros < 25){
            conta = (preco * litros);
            printf("R$ %0.2lf",conta);
        }
        else if (litros > 25){
            desconto = (preco * litros)*0.04;
            conta = (preco * litros) - desconto;
            printf("R$ %0.2lf",conta);
    } 
    } 
    return 0;
}
