int main(){
	int produto, quant;
	float valor,conta;

	scanf("%d\n%d",&produto,&quant);

	if (produto == 1) {
        valor = 5.3;
    }
    else if (produto == 2) {
        valor = 6.0;
    }
     else if (produto == 3) {
        valor = 3.2;
    }
     else if (produto == 4) {
        valor = 2.5;
    }

	conta = valor * quant;

	if(quant >= 15 || conta >= 40){
		conta = conta  - (conta*0.15);
	}

	printf("R$ %.2f",conta);

    return 0;	
}