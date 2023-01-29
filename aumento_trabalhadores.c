int main(){ 
    
	float salario, aumento;

	scanf ("%f",&salario);

	if (salario > 500) {
        aumento= salario * 0.10;
		printf("%0.2lf",(aumento+salario));
	}
	else if ((salario > 300) && (salario < 500)) {
        aumento= salario * 0.07;
        printf("%0.2lf",(aumento+salario));
    }
    else  {
		aumento= salario * 0.05;
        printf("%0.2lf",(aumento+salario));
	}
	
    return 0;
}
