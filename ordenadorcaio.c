void elbubble (int array[], int i, int j, int max){


    if (i== max-1) return;

    if (array[i]> array [j]){
        int aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }
    j++;

    if (j== max){
        i++;
        j = i+1; 
    }
    elbubble (array, i, j, max);
}