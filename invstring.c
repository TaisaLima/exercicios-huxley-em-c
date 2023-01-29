#include<stdio.h>
#define MAX 75

char* Inverte(char str1[])
{
    static int i=0;
    static char str_inv[MAX];
    if(*str1)
    {
         Inverte(str1+1);
         str_inv[i++] = *str1;
    }
    return (str_inv);
}

int main()
{

    char  string1[MAX], *str_inv;
 
    scanf("%s",string1);

    str_inv = Inverte(string1);

    printf("%s",str_inv);
    return 0; 
}