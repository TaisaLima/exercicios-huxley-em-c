#include <stdio.h>
#include <stdlib.h>
 
// calcula recursivamentemente o GCD de dois números
int gcd(int a, int b)
{
    if (b == 0) {
        return a;
    }
 
    return gcd(b, a % b);
}
 
//função para determinar se uma solução é possível
int check(int b[], int n)
{
    for (int x = 0; x < n; x++)
    {
        for (int y = x + 1; y < n; y++)
        {
            if (gcd(b[x], b[y]) != 1) {
                return 1;
            }
        }
    }
    return 0;
}
 
// Teorema do Resto Chinês
int evaluate(int a[], int b[], int n)
{
    int Minv[n];
    int q, r, r1, r2, t, t1, t2;
 
    int total = 1;
    for (int k = 0; k < n; k++) {
        total *= b[k];
    }
 
    for (int k = 0; k < n; k++)
    {
        r1 = b[k];
        r2 = total / b[k];
        t1 = 0;
        t2 = 1;
 
        while (r2 > 0)
        {
            q = r1 / r2;
            r = r1 - q * r2;
            r1 = r2;
            r2 = r;
 
            t = t1 - q * t2;
            t1 = t2;
            t2 = t;
        }
 
        if (r1 == 1) {
            Minv[k] = t1;
        }
 
        if (Minv[k] < 0) {
            Minv[k] = Minv[k] + b[k];
        }
    }
 
    int x = 0;
    for (int k = 0; k < n; k++) {
        x += (a[k] * total * Minv[k]) / b[k];
    }
 
    return x;
}
 
// função principal
int main()
{
    int n = 4;    // número de equações
    int a[n], b[n];
    int k = sizeof(a) / sizeof(a[0]);
 
    for (int i = 0; i < n; i++) {
        scanf("x=%d(mod %d)\n", &a[i], &b[i]);
    }
 
    if (!check(b, n)) {
        printf("x = %d\n", evaluate(a, b, k));
    }
    else {
        printf("The given equations has no solutions.\n");
    }
 
    return 0;
}
