
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i_adotante, i_adotado, diferenca_idade;
    char a_conjunta, estado_civil, gene_adotante, familia_adotando, consentimento_pais, consentimento_adotando;

     scanf ("%d", &i_adotante);

    if (i_adotante < 18 ){
        printf ("Nao pode adotar");
    }

    else if (i_adotante >= 18){
    
    scanf(" %c %c %c %d %c %c %c", &gene_adotante, &a_conjunta, &estado_civil, &i_adotado, &familia_adotando, &consentimento_pais, &consentimento_adotando); 
     diferenca_idade = (i_adotante - i_adotado);

    if (diferenca_idade < 16){
        printf("Nao pode adotar");
    }

    else if (diferenca_idade >= 16 ) {

            if (gene_adotante == 'N'){

                if (a_conjunta == 'S'){ 

                    if (estado_civil == 'S') {
                        
                        if (familia_adotando == 'S') {

                            if (consentimento_pais == 'S'){

                                if (i_adotado >= 12){

                                    if (consentimento_adotando == 'S'){
                                        printf ("Pode adotar");
                                    }
                                    else if (consentimento_adotando == 'N'){
                                        printf ("Nao pode adotar");
                                    }
                                
                                }
                                else if (i_adotado < 12){
                                    printf("Pode adotar");
                                }   
                            }
                            else if (consentimento_pais == 'N') {
                                printf ("Nao pode adotar");
                            }

                        }
                    else if  (familia_adotando == 'N'){

                                if (i_adotado >= 12){

                                    if (consentimento_adotando == 'S'){
                                        printf ("Pode adotar");
                                    }
                                    else if (consentimento_adotando == 'N'){
                                        printf ("Nao pode adotar");
                                    }
                                
                                }
                                else if (i_adotado < 12){
                                    printf("Pode adotar");
                                }   
                    }
                    }
                    else if (estado_civil == 'N'){
                        printf ("Nao pode adotar");
                    }
                } 
                else if (a_conjunta == 'N'){

                    if (familia_adotando == 'S') {

                            if (consentimento_pais == 'S'){

                                if (i_adotado >= 12){

                                    if (consentimento_adotando == 'S'){
                                        printf ("Pode adotar");
                                    }
                                    else if (consentimento_adotando == 'N'){
                                        printf ("Nao pode adotar");
                                    }
                                
                                }
                                else if (i_adotado < 12){
                                    printf("Pode adotar");
                                }   
                            }
                            else if (consentimento_pais == 'N') {
                                printf ("Nao pode adotar");
                            }

                    }
                    else if (familia_adotando == 'N'){

                                if (i_adotado >= 12){

                                    if (consentimento_adotando == 'S'){
                                        printf ("Pode adotar");
                                    }
                                    else if (consentimento_adotando == 'N'){
                                        printf ("Nao pode adotar");
                                    }
                                
                                }
                                else if (i_adotado < 12){
                                    printf("Pode adotar");
                                }   
                    }
                }

            }
            else if (gene_adotante == 'S'){ 
                printf ("Nao pode adotar");
            }
        }
    }    


	return 0;
}