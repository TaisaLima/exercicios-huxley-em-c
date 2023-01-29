int main(){
    float permitido,veloc_carro;

	scanf("%f\n%f",&permitido, &veloc_carro);

	
	if ((veloc_carro > permitido) && (veloc_carro <= (0.2*permitido+ permitido))) {
		printf("85.13\n4");
    }
	else if (veloc_carro > ((permitido * 0.2) + permitido) && (veloc_carro <= ((permitido * 0.5) + permitido))) {
		printf("127.69\n5");
    }
	else if (veloc_carro > ((permitido * 0.5) + permitido)) {
		printf("574.62\n7");
    }
	else if (veloc_carro <= permitido ){
		printf("0.00\n0");
    }
		
	return 0;
}