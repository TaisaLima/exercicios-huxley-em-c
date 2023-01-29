#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){

    int n, i, j;
    scanf ("%d", &n);

    int mat1[n][n];
    int mat2[n][n];
    int mat3[n][n];

    for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}

    for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}

    for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			
         mat3[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d\n", mat3[i][j]);
		}
	}

    
    return 0;
}