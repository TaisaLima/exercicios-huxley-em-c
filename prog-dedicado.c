#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(int cont_programas, int cont_linhas, int cont_dias, int linhas_at, int more_prod)
{
    if(cont_dias == 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n" , cont_programas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n" , cont_linhas);
        if(more_prod==0)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if(more_prod == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if(more_prod == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        }
        else if(more_prod == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if(more_prod == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if(more_prod== 5)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if(more_prod == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
        else
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
        return;
    }
    else
    {
        int a, b;
        scanf("%d%d" , &a, &b);
        if(a >= 5)
        {
            cont_programas += 1;
        }
        if(b >= 100)
        {
            cont_linhas += 1;
        }
        if(b >= linhas_at)
        {
            linhas_at = b;
            more_prod = cont_dias;
        }

    }
    loop(cont_programas, cont_linhas, cont_dias + 1, linhas_at, mais_prod);
}
int main()
{
    loop(0, 0, 0, 0, 0);
    return 0;
}