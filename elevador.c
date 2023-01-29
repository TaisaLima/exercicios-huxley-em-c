#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calc (int andares, int limite, int pessoas, int passou)
{
    int entram, saem;

    if (andares == 0)
    {
        if (passou == 0)
        {
            printf("N");
        }
        else
        {
            printf("S");
        }
    }
    else
    {
        scanf ("%d\n%d", &saem, &entram);
        pessoas -= saem;
        pessoas += entram;
        if (pessoas > limite)
        {
            return calc (andares - 1, limite, pessoas, passou + 1);
        }
        else
        {
            return calc (andares - 1, limite, pessoas, passou);
        }
    }
}

int main (){

    int andares, limite;
    int pessoas = 0;
    scanf ("%d %d", &andares, &limite);
    calc(andares, limite, pessoas, 0);

    return 0;
}