int main() {

    int livros,alunos,C,media;

    scanf ("%d", &livros);
    scanf ("%d", &alunos);

    media = (alunos/livros);


    if  (( 1 <= media) && (media <= 8)) {
        printf("A");
    }
    else if  (( 9 <= media) && (media <= 12)){
        printf("B");
    }
    else if  (( 13 <= media) && (media <= 18)){
        printf("C");
    }
    else
        printf("D");

    
	return 0;
}