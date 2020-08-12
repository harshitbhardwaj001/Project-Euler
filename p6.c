#include <stdio.h>

int main(void)
{
    long sum;
    int sumsqr;
    long diff;
    long final;
    final = 0;
    diff = 0;
    sum = 0;
    sumsqr = 0;

    for(int i = 0; i <= 100; i++)
    {
        sum += i * i;
    }
    for( int j = 0; j <= 100; j++)
    {
        sumsqr += j;
    }
    final = sumsqr * sumsqr;
    diff = final - sum;
    printf("%ld\n", diff);
}