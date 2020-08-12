// Completely Flawed
// Gotta Redo.

#include <stdio.h>

int main(void)
{
    long prime[10002];
    for(int i = 0; prime[i] <= prime[10001]; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j != 0)
            {
                prime[i] = i;
            }
        }
    }
    printf("%ld\n", prime[10001] );
}