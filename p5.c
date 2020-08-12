#include <stdio.h>

int main (void)
{
    int x, y , smallest;
    x = y = 1;
    smallest = 0;

    while(x > 0)
    {
        y = 1;
        while((x % y == 0) && (y <= 20))
        {
            if(y == 20)
            {
                smallest = x;
                break;
            }
            y++;
        }
        x++;

        if(smallest > 0)
        {
            break;
        }
    }
    printf("%d\n", smallest);
}