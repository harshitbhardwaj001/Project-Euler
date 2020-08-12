#include <cs50.h>
#include <stdio.h>

int main()
{
        int sum , fib1 , fib2 , result;
        fib1 = 1;
        fib2 = 1;
        sum = result = 0;
        
        while(result <= 4000000)
        {
            if ((result % 2) == 0)
            {
                sum += result;
            }
            result = fib1 + fib2;
            fib2 = fib1;
            fib1 = result;
        }
        printf("%d\n", sum);
}
