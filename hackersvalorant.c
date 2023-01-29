#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

int luiza(int campo[MAX][MAX], int z, int y, int tam){

int kill_nord=0, kill_noro=0, kill_sudo=0, kill_sude=0, totallu=0;
//nordeste
for (int u = z; u > -1 ; u--){
    for (int h = y; h < tam+1; h++){

        if ((campo[u][h] == 1) && (kill_nord == 0)){
            
            campo[u][h] == 0;
            kill_nord+=1; break;
        }

        if (campo[u][h] == 16)  break;

}
}

//noroeste
for (int t = z; t > -1; t--){
    for (int a = y; a > -1; a--){

        if ((campo[t][a] == 1) && (kill_noro == 0)){
           
            campo[t][a] == 0;
             kill_noro+=1; break;
        }
        if (campo[t][a] == 16)  break;
}
}

//sudeste
for (int i = z; i < tam+1; i++){
    for (int j = y; j < tam+1; j++){

        if ((campo[i][j] == 1) && (kill_sude == 0)){
            
            campo[i][j] == 0;
            kill_sude+=1; break;
        }
        if (campo[i][j] == 16)  break;

}
}

//sudoeste
for (int o = z;o <tam+1;o++){
    for (int k = y; k > -1; k--){
        if ((campo[o][k] == 1) && (kill_sudo == 0)){
            
            campo[o][k] == 0;
            kill_sudo+=1; break;
        }
        if (campo[o][k] == 16)  break;
}
}


totallu = kill_nord + kill_sude+ kill_noro + kill_sudo;

return totallu;

}



int anderson (int campo[MAX][MAX], int z, int y, int tam){

int kill_norte=0, kill_sul=0, kill_leste=0, kill_oeste=0, killan =0;

//norte
for (int i = z; i > -1 ; i--){

        if ((campo[i][y] == 1) && (kill_norte == 0)){
            kill_norte+=1; break;
        }
        if (campo[i][y] == 8)  break;
}



//sul
for (int o = z; o < tam+1 ; o++){

       if ((campo[o][y] == 1) && (kill_sul == 0)){
            kill_sul+=1; break;
        }
       if (campo[o][y] == 8)  break;
}



//leste
for (int j = y; j < tam+1 ; j++){

        if ((campo[z][j] == 1) && (kill_leste == 0)){
            kill_leste+=1; break;
        }
        if (campo[z][j] == 8)  break;

}

//oeste
for (int k = y; k > -1 ; k--){

        if ((campo[z][k] == 1) && (kill_oeste == 0)){
            kill_oeste+=1; break;
        }
        if (campo[z][k] == 8)  break;


}

killan = kill_norte + kill_sul+ kill_leste + kill_oeste;

    return killan;

}



int main() {
    
    int tam, z, x, k , y, lulu=0, sonson=0;

    scanf ("%d\n", &tam);

    int campo[MAX][MAX];
    

    for (int i=0 ; i<tam ; i++){
        for (int j=0 ; j<tam ; j++){
            scanf("%d", &campo[i][j]);
     }
    }

    scanf("%d%d", &z, &k);
    scanf("%d%d", &x, &y);

    campo[z][k] = 8;
    campo[x][y] = 16;

   
    lulu = luiza(campo, z,k,tam);
    sonson = anderson(campo, x,y, tam);

     printf("aziul matou %d\nnosredna matou %d", lulu, sonson);

	return 0;
}
