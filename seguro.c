int main() {

    int genero,idade;

    scanf ("%d", &genero);
    scanf ("%d", &idade);


    if  ((genero == 1) && (idade == 1)) {
        printf("0");
    }
    else if ((genero == 1) && (idade == 0)) {
        printf ("0");
    }
    else if ((genero == 0) && (idade == 1)) {
        printf ("1");
    }
    else
        printf("0");

    
	return 0;
}