#include <stdio.h>
int compara(int array[], int aux, int obj, int conc){
	if (aux==obj-1){
		return conc;
	}
	else{
		int j;
		if (array[aux]<array[aux+1]){
			j= array[aux];
			array[aux]= array[aux+1];
			array[aux+1]= j;
			conc = 0;
		}
		return compara(array, aux +1, obj, conc);
	}
}
void ordena(int array[], int aux, int obj){
	if (aux== obj*obj){
		return;
	}
	else{
		int conc;
		printf("rodou %d vezes\n", aux+1);
		conc= compara(array, 0, obj, 1);
		if (conc){
			return;
		}
		ordena(array, aux+1, obj);
	}
}
int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int array[n];
	//usando for apenas para escanear e printar
	for (int i =0; i < n; i++){
		scanf("%d", &array[i]);
	}
	ordena(array, 0, n);
	for (int u =0; u < n; u++){
		printf("%d ", array[u]);
	}
}