#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int main(){
    int howmany; 
    double calcmon = 0;
    double calckg = 0;
    scanf("%d", &howmany);
    
    for(int w = 0; w<howmany; w++){
    double reais;
    scanf("%lf", &reais);
    getchar();
    calcmon += reais;


    char fruits[80];
    int i=0, count = 0; 
    fgets(fruits, 80, stdin);while(fruits[i] != '\n' && fruits[i] != '\0'){while(fruits[i] == ' ') i++; 
            
if(fruits[i] != '\n' && fruits[i] != '\0'){ count ++;while(fruits[i] != ' ' && fruits[i] != '\n' && fruits[i] != '\0') i++;}}calckg += count;printf("dia %d: %d kg\n", w+1,count);}
    printf("%.2lf kg por dia\n", calckg/howmany);
    printf("R$ %.2lf por dia", calcmon/howmany);
        return 0;
    }