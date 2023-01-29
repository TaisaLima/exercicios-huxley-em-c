int main(){ 
    
	float salario, aumento, salario2;

	scanf ("%f",&salario);

	if ((salario <= 280) && (salario > 0)){
        aumento= salario * 0.20;
        salario2 = aumento+salario;
		printf("%0.2lf\n20\n%0.2f\n%0.2lf",salario, aumento, salario2);
	}
	else if ((salario > 280) && (salario < 700)) {
        aumento= salario * 0.15;
        salario2 = aumento+salario;
		printf("%0.2lf\n15\n%0.2lf\n%0.2lf",salario, aumento, salario2);
	}
    else if ((salario > 700) && (salario < 1500)) {
        aumento= salario * 0.1;
        salario2 = aumento+salario;
		printf("%0.2lf\n10\n%0.2lf\n%0.2lf",salario, aumento, salario2);
	}
    else if (salario >= 1500) {
        aumento= salario * 0.05;
        salario2 = aumento+salario;
		printf("%0.2lf\n5\n%0.2f\n%0.2lf",salario, aumento, salario2);
	}
	else {
	    printf ("0\n0\n0\n0");
	}
    return 0;
}