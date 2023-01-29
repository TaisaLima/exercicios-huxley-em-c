#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int chamada(int n, int x, int y, int i, int cidade_a, int cidade_b)
{
    char k;

    printf("Coordenadas: (%d, %d), valor de n = %d, cidade A: %d, cidade B: %d contador: %d\n", x, y, n, cidade_a, cidade_b, i);

    if(n == 0)
    {
        return i;
    }
    else
    {
        scanf(" %c", &k);

        if(x == 0 && y == 0)
        {
            if(k == 'D' || k == 'd')
            {
                chamada(--n, ++x, y, i, ++cidade_a, cidade_b );
            }
            else if(k == 'C' || k == 'c')
            {
                chamada(--n, x, ++y, i, cidade_a, ++cidade_b);
            }
        }
        else
        {
            if(x > y)
            {
                if(k == 'D' || k == 'd')
                {
                    chamada(--n, ++x, y, i, cidade_a, cidade_b);
                }
                else if(k == 'C' || k == 'c')
                {
                    chamada(--n, x, ++y, i, cidade_a, cidade_b);
                }
            }
            else if(y > x)
            {
                if(k == 'D' || k == 'd')
                {
                    chamada(--n, ++x, y, i, cidade_a, cidade_b);
                }
                else if(k == 'C' || k == 'c')
                {
                    chamada(--n, x, ++y, i, cidade_a, cidade_b);
                }
            }
            //quando ele chega na muralha é feito o seguinte teste
            else
            {
                if(k == 'D' || k == 'd')
                {
                    if(cidade_a == 1)
                    {
                        chamada(--n, ++x, y, i, cidade_a, cidade_b);
                    }
                    else
                    {
                        chamada(--n, x, ++y, ++i, ++cidade_a, --cidade_b);
                    }
                }
                else if(k == 'C' || k == 'c')
                {
                    if(cidade_b == 1)
                    {
                        chamada(--n, ++x, y, i, cidade_a, cidade_b);
                    }
                    else
                    {
                        chamada(--n, x, ++y, ++i, --cidade_a, ++cidade_b);
                    }
                }
            }
           
        }
    }
}


int main()
{
    int n, i;

    scanf("%d", &n);

    i = chamada(n, 0, 0, 0, 0, 0);

    printf("%d\n", i);

    return 0; 
}

