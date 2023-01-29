int main() {

    
    int level,potencia_caso1, potencia_caso2, potencia_caso3, potencia_caso4, potencia_caso5;


    scanf ("%d", &level);

    if  (( 1 <= level) && (level <= 20)){
        potencia_caso1 = 20 + (level * level * level);
        printf("Potencia de : %d W", potencia_caso1);
    }
    else if  (( 21 <= level) && (level <= 40)){
        potencia_caso2 = (8000 + ((level - 10 ) * ( level - 10 )));
        printf("Potencia de : %d W", potencia_caso2);
    }
    else if  (( 41 <= level) && (level <= 60)){
        potencia_caso3 = (9000 + (5*level));
        printf("Potencia de : %d W", potencia_caso3);
    }
    else if  (( 61 <= level) && (level <= 80)){
        potencia_caso4 = (9300 + (2*level));
        printf("Potencia de : %d W", potencia_caso4);
    }
    else if  (( 81 <= level) && (level <= 100)){
        potencia_caso5 = (9500 + (level));
        printf("Potencia de : %d W", potencia_caso5);
    }
    else
        printf("Media invalida");

    
	return 0;
}