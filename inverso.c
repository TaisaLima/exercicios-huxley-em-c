


int ler(int num, int cont, int array[]){

    if(num == cont){
        
        cod(array, 0);
    }
    else{
        scanf("%d", &array[cont]);
        cont++;
        ler(num, cont, array);
    }

}

int main() {

    int num;
    scanf("%d", &num);
    int array[num];
    
    ler(num, 0, array);
    
	return 0;
}