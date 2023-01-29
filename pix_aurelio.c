#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n_anderson,n_guilherme, n_rita, n_higor,juiz1, juiz2,juiz3,juiz4, conta_anderson,media, conta_guilherme, conta_higor, conta_rita;
    char l_anderson, l_guilherme, l_rita, l_higor;


    scanf ("%d %d %d %d\n", &n_anderson,&n_guilherme,&n_rita,&n_higor);
    scanf ("%c %c %c %c\n", &l_anderson, &l_guilherme, &l_rita, &l_higor);
    scanf ("%d %d %d %d\n", &juiz1, &juiz2, &juiz3, &juiz4);


    //a = juiz1;
    //b = juiz2;
    //c = juiz3; 
    //d = juiz4;

    media = ((n_anderson+n_guilherme+n_higor+n_rita)/4);

    if ((media >= 0 ) && (media <= 10)){

        if ((l_anderson == 'a') || (l_guilherme == 'a') || (l_higor == 'a') || (l_rita == 'a' )){
            conta_anderson = n_anderson + juiz1 + (juiz1 * 0.4);
            conta_guilherme = n_guilherme + juiz1 + (juiz1 * 0.4);
            conta_rita = n_rita + juiz1 + (juiz1 * 0.4);
            conta_higor = n_anderson + juiz1 + (juiz1 * 0.4); 
        }
        else  if ((l_anderson == 'b') || (l_guilherme == 'b') || (l_higor == 'b') || (l_rita == 'b' )){
            conta_anderson = n_anderson + juiz2 + (juiz2 * 0.4);
            conta_guilherme = n_guilherme + juiz2 + (juiz2 * 0.4);
            conta_rita = n_rita + juiz2 + (juiz2 * 0.4);
            conta_higor = n_anderson + juiz2 + (juiz2 * 0.4);
        }
        else if ((l_anderson == 'c') || (l_guilherme == 'c') || (l_higor == 'c') || (l_rita == 'c' )){
            conta_anderson = n_anderson + juiz3 + (juiz3 * 0.4);
            conta_guilherme = n_guilherme + juiz3 + (juiz3 * 0.4);
            conta_rita = n_rita + juiz3 + (juiz3 * 0.4);
            conta_higor = n_anderson + juiz3 + (juiz3 * 0.4);
        }
        else  if ((l_anderson == 'd') || (l_guilherme == 'd') || (l_higor == 'd') || (l_rita == 'd' )){
            conta_anderson = n_anderson + juiz4 + (juiz4 * 0.4);
            conta_guilherme = n_guilherme + juiz4 + (juiz4 * 0.4);
            conta_rita = n_rita + juiz4 + (juiz4 * 0.4);
            conta_higor = n_anderson + juiz4 + (juiz4 * 0.4);
        }

    if ((conta_anderson < conta_guilherme) && (conta_anderson < conta_higor) && (conta_anderson < conta_rita)) {
        printf("Anderson quem vai pagar o lanche!:D");
    }
    else if ((conta_guilherme < conta_anderson) && ( conta_guilherme < conta_higor) && ( conta_guilherme < conta_rita)) {
        printf ("Guilherme quem vai pagar o lanche!:D");
    }
    else if ((conta_rita < conta_higor) && ( conta_rita < conta_anderson) && ( conta_rita < conta_guilherme)) {
        printf ("Rita quem vai pagar o lanche!:D");
    
    }
    else if ((conta_higor < conta_rita ) && ( conta_higor < conta_anderson) && ( conta_higor < conta_guilherme)) {
        printf ("Higor quem vai pagar o lanche!:D");
    }

    }
    else if ((media > 10 ) && (media <= 30 )){

         if ((l_anderson == 'a') || (l_guilherme == 'a') || (l_higor == 'a') || (l_rita == 'a' )){
            conta_anderson = n_anderson + juiz1 + (juiz1 * 0.6);
            conta_guilherme = n_guilherme + juiz1 + (juiz1 * 0.6);
            conta_rita = n_rita + juiz1 + (juiz1 * 0.6);
            conta_higor = n_anderson + juiz1 + (juiz1 * 0.6); 
        }
        else  if ((l_anderson == 'b') || (l_guilherme == 'b') || (l_higor == 'b') || (l_rita == 'b' )){
            conta_anderson = n_anderson + juiz2 + (juiz2 * 0.6);
            conta_guilherme = n_guilherme + juiz2 + (juiz2 * 0.6);
            conta_rita = n_rita + juiz2 + (juiz2 * 0.6);
            conta_higor = n_anderson + juiz2 + (juiz2 * 0.6);
        }
        else if ((l_anderson == 'c') || (l_guilherme == 'c') || (l_higor == 'c') || (l_rita == 'c' )){
            conta_anderson = n_anderson + juiz3 + (juiz3 * 0.6);
            conta_guilherme = n_guilherme + juiz3 + (juiz3 * 0.6);
            conta_rita = n_rita + juiz3 + (juiz3 * 0.6);
            conta_higor = n_anderson + juiz3 + (juiz3 * 0.6);
        }
        else  if ((l_anderson == 'd') || (l_guilherme == 'd') || (l_higor == 'd') || (l_rita == 'd' )){
            conta_anderson = n_anderson + juiz4 + (juiz4 * 0.6);
            conta_guilherme = n_guilherme + juiz4 + (juiz4 * 0.6);
            conta_rita = n_rita + juiz4 + (juiz4 * 0.6);
            conta_higor = n_anderson + juiz4 + (juiz4 * 0.6);
        }

    if ((conta_anderson < conta_guilherme) && (conta_anderson < conta_higor) && (conta_anderson < conta_rita)) {
        printf("Anderson quem vai pagar o lanche!:D");
    }
    else if ((conta_guilherme < conta_anderson) && ( conta_guilherme < conta_higor) && ( conta_guilherme < conta_rita)) {
        printf ("Guilherme quem vai pagar o lanche!:D");
    }
    else if ((conta_rita < conta_higor) && ( conta_rita < conta_anderson) && ( conta_rita < conta_guilherme)) {
        printf ("Rita quem vai pagar o lanche!:D");
    
    }
    else if ((conta_higor < conta_rita ) && ( conta_higor < conta_anderson) && ( conta_higor < conta_guilherme)) {
        printf ("Higor quem vai pagar o lanche!:D");
    }

    }
    else if ((media > 30 ) && (media <= 60)){
     
        if ((l_anderson == 'a') || (l_guilherme == 'a') || (l_higor == 'a') || (l_rita == 'a' )){
            conta_anderson = n_anderson + juiz1 + (juiz1 * 0.6);
            conta_guilherme = n_guilherme + juiz1 + (juiz1 * 0.6);
            conta_rita = n_rita + juiz1 + (juiz1 * 0.6);
            conta_higor = n_anderson + juiz1 + (juiz1 * 0.6); 
        }
        else  if ((l_anderson == 'b') || (l_guilherme == 'b') || (l_higor == 'b') || (l_rita == 'b' )){
            conta_anderson = n_anderson + juiz2 + (juiz2 * 0.8);
            conta_guilherme = n_guilherme + juiz2 + (juiz2 * 0.8);
            conta_rita = n_rita + juiz2 + (juiz2 * 0.8);
            conta_higor = n_anderson + juiz2 + (juiz2 * 0.8);
        }
        else if ((l_anderson == 'c') || (l_guilherme == 'c') || (l_higor == 'c') || (l_rita == 'c' )){
            conta_anderson = n_anderson + juiz3 + (juiz3 * 0.8);
            conta_guilherme = n_guilherme + juiz3 + (juiz3 * 0.8);
            conta_rita = n_rita + juiz3 + (juiz3 * 0.8);
            conta_higor = n_anderson + juiz3 + (juiz3 * 0.8);
        }
        else  if ((l_anderson == 'd') || (l_guilherme == 'd') || (l_higor == 'd') || (l_rita == 'd' )){
            conta_anderson = n_anderson + juiz4 + (juiz4 * 0.8);
            conta_guilherme = n_guilherme + juiz4 + (juiz4 * 0.8);
            conta_rita = n_rita + juiz4 + (juiz4 * 0.8);
            conta_higor = n_anderson + juiz4 + (juiz4 * 0.8);
        }

    if ((conta_anderson < conta_guilherme) && (conta_anderson < conta_higor) && (conta_anderson < conta_rita)) {
        printf("Anderson quem vai pagar o lanche!:D");
    }
    else if ((conta_guilherme < conta_anderson) && ( conta_guilherme < conta_higor) && ( conta_guilherme < conta_rita)) {
        printf ("Guilherme quem vai pagar o lanche!:D");
    }
    else if ((conta_rita < conta_higor) && ( conta_rita < conta_anderson) && ( conta_rita < conta_guilherme)) {
        printf ("Rita quem vai pagar o lanche!:D");
    
    }
    else if ((conta_higor < conta_rita ) && ( conta_higor < conta_anderson) && ( conta_higor < conta_guilherme)) {
        printf ("Higor quem vai pagar o lanche!:D");
    }

    }
    else if (media > 60 ){

        if ((l_anderson == 'a') || (l_guilherme == 'a') || (l_higor == 'a') || (l_rita == 'a' )){
            conta_anderson = n_anderson + juiz1 + (juiz1 * 1);
            conta_guilherme = n_guilherme + juiz1 + (juiz1 * 1);
            conta_rita = n_rita + juiz1 + (juiz1 * 1);
            conta_higor = n_anderson + juiz1 + (juiz1 * 1); 
        }
        else  if ((l_anderson == 'b') || (l_guilherme == 'b') || (l_higor == 'b') || (l_rita == 'b' )){
            conta_anderson = n_anderson + juiz2 + (juiz2 * 1);
            conta_guilherme = n_guilherme + juiz2 + (juiz2 * 1);
            conta_rita = n_rita + juiz2 + (juiz2 * 1);
            conta_higor = n_anderson + juiz2 + (juiz2 * 1);
        }
        else if ((l_anderson == 'c') || (l_guilherme == 'c') || (l_higor == 'c') || (l_rita == 'c' )){
            conta_anderson = n_anderson + juiz3 + (juiz3 * 1);
            conta_guilherme = n_guilherme + juiz3 + (juiz3 * 1);
            conta_rita = n_rita + juiz3 + (juiz3 * 1);
            conta_higor = n_anderson + juiz3 + (juiz3 * 1);
        }
        else  if ((l_anderson == 'd') || (l_guilherme == 'd') || (l_higor == 'd') || (l_rita == 'd' )){
            conta_anderson = n_anderson + juiz4 + (juiz4 * 1);
            conta_guilherme = n_guilherme + juiz4 + (juiz4 * 1);
            conta_rita = n_rita + juiz4 + (juiz4 * 1);
            conta_higor = n_anderson + juiz4 + (juiz4 * 1);
        }
    
    if ((conta_anderson < conta_guilherme) && (conta_anderson < conta_higor) && (conta_anderson < conta_rita)) {
        printf("Anderson quem vai pagar o lanche!:D");
    }
    else if ((conta_guilherme < conta_anderson) && ( conta_guilherme < conta_higor) && ( conta_guilherme < conta_rita)) {
        printf ("Guilherme quem vai pagar o lanche!:D");
    }
    else if ((conta_rita < conta_higor) && ( conta_rita < conta_anderson) && ( conta_rita < conta_guilherme)) {
        printf ("Rita quem vai pagar o lanche!:D");
    
    }
    else if ((conta_higor < conta_rita ) && ( conta_higor < conta_anderson) && ( conta_higor < conta_guilherme)) {
        printf ("Higor quem vai pagar o lanche!:D");
    }

    }

    
    return 0;
}