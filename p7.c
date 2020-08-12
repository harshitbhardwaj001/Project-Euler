// Completely Flawed
// Gotta Redo.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long prime[10002];
    for(int i = ; prime[i] <= prime[10001]; i++)
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