#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int atirar_norte(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_rei_v, int j_rei_v)
{
    if(i < 0)
    {
        return 0;
    }
    else
    {
        if(i == i_rei_v && j == j_rei_v)
        {
            return 1;
        }
        else if(mapa[i][j] == 0)
        {
            mapa[i][j]= 15;
        }
        atirar_norte(tam_i, tam_j, mapa, i - 1, j, i_rei_v, j_rei_v);
    }
    
}


int atirar_sul(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_aziul, int j_aziul)
{
    if(i == tam_i)
    {
        return 0;
    }
    else
    {
        if(i == i_aziul && j == j_aziul)
        {
            return 1;
        }
        else if(mapa[i][j] == 0)
        {
             mapa[i][j]= 15;
        }
        atirar_sul(tam_i, tam_j, mapa, i + 1, j, i_aziul, j_aziul);
    }
}

int atirar_leste(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_aziul, int j_aziul)
{
    if(j == tam_j)
    {
        return 0;
    }
    else
    {
        if(i == i_aziul && j == j_aziul)
        {
            return 1;
        }
        else if(mapa[i][j] == 0)
        {
            mapa[i][j]= 15;
        }
        atirar_leste(tam_i, tam_j, mapa, i, j + 1, i_aziul, j_aziul);
    }
    
}

int atirar_oeste(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_aziul, int j_aziul)
{
    if(j < 0)
    {
        return 0;
    }
    else
    {
        if(i == i_aziul && j == j_aziul)
        {
            return 1;
        }
        else if(mapa[i][j] == 0)
        {
            mapa[i][j]= 15;
        }
        atirar_oeste(tam_i, tam_j, mapa, i, j - 1, i_aziul, j_aziul);
    }
    
}


int atirar_sudeste(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_nosredna, int j_nosredna)
{
    if(i == tam_i || j == tam_j)
    {
        return 0;
    }
    else
    {
        if(i == i_nosredna && j == j_nosredna)
        {
            return 1;
        }
        else if(mapa[i][j] == 0)
        {
            mapa[i][j] = 15;
        }
        atirar_sudeste(tam_i, tam_j, mapa, i + 1, j + 1, i_nosredna, j_nosredna);
    }
    
}
int atirar_sudoeste(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_nosredna, int j_nosredna)
{
    if(i == tam_i || j < 0)
    {
        return 0;
    }
    else
    {
        if(i == i_nosredna && j == j_nosredna)
        {
            return 0;
        }
        else if(mapa[i][j] == 0)
        {
            mapa[i][j] = 15;
        }
        atirar_sudoeste(tam_i, tam_j, mapa, i + 1, j - 1, i_nosredna, j_nosredna);
    } 
}
int atirar_noroeste(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_nosredna, int j_nosredna)
{
    if(i < 0 || j < 0)
    {
        return 0;
    }
    else
    {
        if(i == i_nosredna && j == j_nosredna)
        {
            return 0;
        }
        else if(mapa[i][j] == 0)
        {
            mapa[i][j] = 15;
        }
        atirar_noroeste(tam_i, tam_j, mapa, i - 1, j - 1, i_nosredna, j_nosredna);
    }
}

int atirar_nordeste(int tam_i, int tam_j, int mapa[tam_i][tam_j], int i, int j, int i_nosredna, int j_nosredna)
{
    if(i < 0 || j == tam_j)
    {
        return 0;
    }
    else
    {
        if(i == i_nosredna && j == j_nosredna)
        {
            return 0;
        }
        else if(mapa[i][j] == 0)
        {
            mapa[i][j] = 15;
        }
        atirar_nordeste(tam_i, tam_j, mapa, i - 1, j + 1, i_nosredna, j_nosredna);
    }
}


void huaisang(int tam_i, int tam_j, int mapa[tam_i][tam_j])
{
    for(int i = 0; i < tam_i; i++)
    {
        for(int j = 0; j < tam_j; j++)
        {
            scanf("%d", &mapa[i][j]);
        }
    }
}

int montesepultura(int i_rei_v, int j_rei_v, int contador, int mapa[8][8]){
    
    int sul = i_rei_v+1;
    int norte = i_rei_v-1;
    int leste = j_rei_v+1;
    int oeste = j_rei_v-1;

    if ((mapa[sul][j_rei_v] == 15) || ((sul) > 8)|| (mapa[sul][j_rei_v] == 1)){
        contador +=1;
    }
    
    if ((mapa[norte][j_rei_v] == 1) || (mapa[norte][j_rei_v] == 15) || ((norte) < 0)) {
        contador +=1;
    }
    
    if ((mapa[i_rei_v][leste] == 1)||(mapa[i_rei_v][leste] == 15) || ((leste) > 8)) {
        contador +=1;
    }

   
    if ((mapa[i_rei_v][oeste] == 1) ||(mapa[i_rei_v][oeste] == 15) || ((oeste) < 0)){
        contador +=1;
    }

  
    if ((mapa[norte][leste] == 1) || (mapa[norte][leste] == 15) || ((leste > 8 || norte < 0))) {
        contador +=1;
    }

    
    if ((mapa[sul][leste] == 1) ||(mapa[sul][leste] == 15) || ((leste > 8 || sul> 8))) {
        contador +=1;
    }

    //sudoeste
    if ((mapa[sul][oeste] == 1) || (mapa[sul][oeste] == 15) || ((sul > 8 || oeste < 0))) {
        contador +=1;
    }

   
    if ((mapa[norte][oeste] == 1) || (mapa[norte][oeste] == 15) || ((oeste < 0 || norte < 0))){
        contador +=1;
    }

    return contador;
}

int main() {

    int i_torre1,i_rei_p,i_rei_v,i_torre2,j_torre1,j_torre2,j_rei_v,j_rei_p;
    int mapa[8][8];
    int posic[4];
    int sul = i_rei_p+1;
    int norte = i_rei_p-1;
    int leste = j_rei_p+1;
    int oeste = j_rei_p-1;

    huaisang(8, 8, mapa);

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++){

        if (mapa[i][j]== 1) {i_torre1= i; j_torre1=j;}

        if (mapa[i][j]== 2) {i_rei_p= i; j_rei_p=j;}

        if (mapa[i][j]== 3) {i_rei_v= i;j_rei_v=j;}

        if ((mapa[i][j]== 1) && ((i != i_torre1) && (j != j_torre1))){i_torre2= i;j_torre2=j;}

    }
    }

//torre 1 de pedro
int torre1 =atirar_norte(8,8,mapa,i_torre1, j_torre1, i_rei_v, j_rei_v) + atirar_leste (8,8,mapa,i_torre1, j_torre1, i_rei_v, j_rei_v) + atirar_oeste(8,8,mapa,i_torre1, j_torre1, i_rei_v, j_rei_v)+ atirar_sul(8,8,mapa,i_torre1, j_torre1, i_rei_v, j_rei_v);
if (torre1 == 1) {printf ("Xeque-mate"); return 0;}

//torre 2 de pedro
int torre2 =atirar_norte(8,8,mapa,i_torre2, j_torre2, i_rei_v, j_rei_v) + atirar_leste (8,8,mapa,i_torre2, j_torre2, i_rei_v, j_rei_v) + atirar_oeste(8,8,mapa,i_torre2, j_torre2, i_rei_v, j_rei_v)+ atirar_sul(8,8,mapa,i_torre2, j_torre2, i_rei_v, j_rei_v);
if (torre2 == 1) {printf ("Xeque-mate"); return 0;}

//rei de pedro

  int sul = i_rei_p+1;
    int norte = i_rei_p-1;
    int leste = j_rei_p+1;
    int oeste = j_rei_p-1;


    if ((mapa[sul][j_rei_p] == 3) || (mapa[norte][j_rei_p] == 3) || (mapa[i_rei_p][leste] == 3) || (mapa[i_rei_p][oeste] == 3) || (mapa[norte][leste] == 3) || (mapa[sul][leste] == 3) || (mapa[sul][oeste] == 3)|| (mapa[norte][oeste] == 3))
       {printf ("Xeque-mate"); return 0;}
    else { 
    mapa[sul][j_rei_p] = 15;
    mapa[norte][j_rei_p] = 15;
    mapa[i_rei_p][leste] = 15;
    mapa[i_rei_p][oeste] = 15;
    mapa[norte][leste] = 15;
    mapa[norte][oeste] = 15;
    mapa[sul][oeste] = 15;
    mapa[sul][leste] = 15;
    }
    
   


//afogamento
int resul = montesepultura(i_rei_v, j_rei_v, 0, mapa);

if (resul<7){
    printf("Nao ocorreu ainda");
    return 0;
}
if (resul==8){
    printf("afogado");
    return 0;
}

	return 0;
}