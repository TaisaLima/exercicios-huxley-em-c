#include <stdio.h>

int findMinX(int num[], int rem[], int k)
{
    int x = 1;
    while (true)
    {
        int j;
        for (j = 0; j < k; j++ ){
            if (x % num[j] != rem[j]){
                    break;}
        }
        if (j == k){
            return x;
        }
        x++;
    }
    return x;
}

int main()
{
    int number[] = {5, 7, 11};
    int reminder[] = {1, 1, 3};
    int k = sizeof(number) / sizeof(number[0]);
    printf("The value of x is ");
    findMinX(number, reminder, k);
    return 0;
}