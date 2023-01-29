int main() {

    float A,B,C,media;

    scanf ("%f", &A);
    scanf ("%f", &B);
    scanf ("%f", &C);

    media = ((A+B+C)/3);


    if  (( 70 <= media) && (media <= 100)){
        printf("A media do aluno foi %0.2lf e ele foi APROVADO", media);
    }
    else if  (( 0 <= media) && (media < 40)){
        printf("A media do aluno foi %0.2lf e ele foi REPROVADO", media);
    }
    else if  (( 40 <= media) && (media <= 70)){
        printf("A media do aluno foi %0.2lf e ele foi FINAL", media);
    }
    else
        printf("Media invalida");

    
	return 0;
}