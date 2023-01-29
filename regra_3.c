#include <stdio.h>

int main(){ 
    
	float atv_passadas, atv_feitas, chance, mult;

	scanf ("%f%f",&atv_passadas, &atv_feitas);
    
        mult = atv_feitas * 100;
    	chance = mult / atv_passadas;


    printf("%f",chance);
	
    return 0;
}