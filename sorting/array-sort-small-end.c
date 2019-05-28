#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int arr[] = {2 , 4 , 1 , 100 ,50};

    int index = sizeof(arr) / sizeof(int);

    for(int i = index -1 ; i >= 0 ; i--)
    {
        int small = i;

        for(int j = i-1 ; j >=0 ; j--)
        {
            if(arr[small] > arr[j])
            {
                small = j;
            }
        }
        int smallvalue = arr[small];

        for(int k = small ; k < i ; k++)
        {
            arr[k] = arr[k+1];
        }
        arr[i] = smallvalue;
    }

    for(int l = 0 ; l < index ; l++)
    {
        printf("%i ", arr[l]);
    }

}