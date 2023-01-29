#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){ 
    
	float atv_passadas, atv_feitas, chance, mult;

	scanf ("%f %f ",&atv_passadas, &atv_feitas);

	if (atv_feitas > atv_passadas) {
		printf("100%% 94.00%% Excelente", chance);
	}
	else {
		mult = atv_feitas * 100;
    	chance = mult / atv_passadas;

		if ((chance > 0) && (chance < 20)) {
			printf("%0.2lf%% 4.40%% Pessimo",chance);
		}
		else if ((chance >= 20 ) && (chance <40)) {
			printf("%0.2lf%% 31.65%% Ruim",chance);
		}
		else if ((chance >= 40) && (chance < 60)) {
			printf("%0.2lf%% 56.82%% Bom",chance);
		}
		else if ((chance >= 60 ) && (chance < 80 )) {
			printf("%0.2lf%% 80.00%% Muito Bom",chance);
		}
		else if ((chance >= 80 ) && (chance <= 100)) {
			printf("%0.2lf%% 94.00%% Excelente",chance);
		}
		
	}
	
    return 0;
}