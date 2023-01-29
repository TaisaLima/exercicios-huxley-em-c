int main(){
    
    float salario, comprometido, disponivel;

    scanf ("%f \n %f", &salario, &comprometido);

    disponivel = salario * 0.3 - comprometido;
    
    if (disponivel > 0 ) {
          printf ("%0.2f\n", disponivel);
    }
    else {
        printf ("0.00");
    }
 
    return 0;
}