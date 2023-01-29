#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double calc (int media,int numparticip, char letra, int j1, int j2, int j3, int j4){

    int pont;
    double fator;

    if (( 0 <= media) && ( media<=10)){
        fator = 0.4;
    }
    if ((10 < media) && (media <=30)){
        fator = 0.6;
    }
    if ((30< media) && ( media <= 60)){
        fator = 0.8;
    }
    if (media > 60){
        fator = 1;
    }

    if ( letra == 'a'){
        pont = numparticip + j1 + (j1 * fator);
    }

    if ( letra == 'b'){
        pont = numparticip + j2 + (j2 * fator);
    }
    if ( letra == 'c'){
        pont = numparticip + j3 + (j3 * fator);
    }
    if ( letra == 'd'){
        pont = numparticip + j4 +( j4 * fator);
    }

    return pont;

}


int main(){

    int media, and_num, hig_num, gui_num, rit_num, juiz1, juiz2, juiz3, juiz4, anderson, guilherme, rita, higor;
    char l1, l2, l3, l4;

    scanf("%d%d%d%d\n",&and_num, &gui_num,&rit_num, &hig_num);
    scanf(" %c %c %c %c\n", &l1, &l2, &l3, &l4);
    scanf("%d%d%d%d\n",&juiz1,&juiz2,&juiz3,&juiz4);

    media = (and_num + gui_num, rit_num + gui_num)/ 4;

    anderson = calc(media,and_num, l1, juiz1, juiz2, juiz3, juiz4);
    guilherme = calc(media,gui_num, l2, juiz1, juiz2, juiz3, juiz4);
    rita = calc(media,rit_num, l3, juiz1, juiz2, juiz3, juiz4);
    higor = calc(media,hig_num, l4, juiz1, juiz2, juiz3, juiz4);

    if ((anderson < guilherme) && (anderson < higor) && (anderson < rita)){
        printf("Anderson quem vai pagar o lanche!:D");
    }
    else if ((guilherme < anderson) && (guilherme < higor) && (guilherme < rita)){
        printf("Guilherme quem vai pagar o lanche!:D");
    }
    else if ((higor < guilherme) && (higor < anderson) && (higor < rita)){
        printf("Higor quem vai pagar o lanche!:D");
    }
    else {
        printf ("Rita quem vai pagar o lanche!:D");
    }
    
    return 0;
}