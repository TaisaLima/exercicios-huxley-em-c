#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

int divisivel(int N, int R, int num)
{
    if(num > N)
    {
        return R;
    }
    else
    {
        if(N % num == 0 && num % 3 == 0)
        {
            return divisivel(N, R + 1, num + 1);
        }
        else
        {
            return divisivel(N, R, num + 1);
        }
    }

}

int main()
{
    int N;
    int R = 0;
    int num = 1;

    scanf("%d", &N);

    int div = divisivel(N, R, num);

    if(div != 0)
    {
        printf("%d", div);
    }
    else
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }

    return 0;
}