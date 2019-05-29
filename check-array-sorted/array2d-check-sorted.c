#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* recursion function same as 1d array difference
is at the main function i added loop to pass 1 array at a time for the checksorted function.
*/
int checksorted (int arr[] , int index)
{
    if( (index == 0) || (index ==1) )
    {
        return 1;
    }

     if( arr[index -1] >= arr[index -2] )
    {
        return checksorted(arr, index -1);
    }
    else
    {
        return 0;
    }

}

int main(void)
{
       int arr[4][4] = { {10 , 15 , 23 ,115} , {20 , 10 ,2, 15} ,{5, 2 ,0 ,  6} , {2 , 5 , 10 , 15} };
       int index = sizeof(arr)/ sizeof(arr[4]);

       for(int j = 0 ; j < 4 ; j++)
       {
              if(checksorted(arr[j] , index))
              {
              printf("%i yes \n", j);
              }
              else
              {
              printf("%i noo \n", j);
               }
       }



}