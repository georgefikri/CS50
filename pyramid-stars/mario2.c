#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    while (true)
    {
       n = get_int();
        if ((n < 24) && (n != .0f) && (n > 0))
        {
            break;
        }
    }

    for(int x = 1; x <= n ;x++)
    {
        for (int z = n ; z >=x ;z--)
        {
            printf(" ");
        }

       for (int y = 1; y<= x  ; y++)
       {
            printf("#");

       }
            printf("\n");
    }




}