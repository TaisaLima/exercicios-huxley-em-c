#include <string.h>

int loop (int num, int x, int y, int reino){
    
    int contx = 0, conty=0, reino2, moeda = 3;

    char direction;
    scanf (" %c", &direction);

   
    if (direction == 'D'){
        x++;
        reino2 = 0;
    }
    else if (direction == 'C'){
        y++;
        reino2 = 1;
    }
    
    if (x || y == 0){
        reino = reino2;
    }

    if ((reino2 != reino )){
        
        if ( y-x < 1){
            moeda++;
            reino = 0;
        }
    
        if ( y-x > 1){
            
            moeda++;
            reino = 1;
        }
    }

    if (num == 1) {

        printf("%d", moeda);
        return 0;
    }
    else {
        return loop (num-1, x, y, reino);
    }

    return 0;
}


int main (){

     int numero, x = 0, y = 0, reino;

    scanf ("%d",&numero);

    loop(numero, x, y, reino);
    return 0;
}