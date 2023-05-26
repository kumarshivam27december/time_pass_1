// in header file we define the size 
#include <stdio.h>
#define SIZE 5
void main()
{
    int i;
    int arr[5];
    for(i=0;i<5;i++)
    {
        printf("\n ENTER THE ELEMENT [%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n arr[%d] = %d",i,arr[i]);
    }


    // this is an error =>    int arr[SIZE]=[];
    // this is an error =>    int arr[SIZE]=10;
    // this is correct  =>    int arr3[SIZE]={};  

}
//1d array is simple array or list
//2d array becomes a matrix having rows and column
/*

we can even assign more and less value to a limited size of
arr it will not give any kind of error as c and c++ are
not an strict language wrt to type and size (wrt array)


*/