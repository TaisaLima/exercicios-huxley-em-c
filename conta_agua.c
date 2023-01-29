int main(){ 
    
	int consumo, aumento, taxa, conta;

	scanf ("%d",&consumo);
    taxa = 7;
	if (consumo < 10) {
		printf("%d", taxa);
	}
	else if ((consumo >= 11) && (consumo <= 30)){
        conta= (consumo - 10) * 1 ;
        printf("%d",(conta + taxa));
    }
    else if ((consumo >= 31) && (consumo <= 100)){
        conta= (consumo - 30)  * 2 + 20;
        printf("%d",(conta + taxa));
    }
    else  {
        conta= ((consumo - 100) * 5) + 160;
        printf("%d",(conta + taxa));
    }
	
    return 0;
}
