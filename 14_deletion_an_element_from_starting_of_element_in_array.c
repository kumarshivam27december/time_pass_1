/*
Author-Shivam kumar
Date-24/03/2023
Topic-deleting a new an element from starting of the array
*/


//static allocation ---occupy space first(utilise it later)
//array is static memory location
#include <stdio.h>
#define SIZE 5
void main()
{
    int arr[100];
    int i,value,size;
    printf("\n The size of array = ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("\nEnter element [%d] = ",i);
        scanf("%d",&arr[i]);
    }
    //before deletion
    
    printf("\n Before insertion \n");
    for(i=0;i<size;i++)
    {
        printf("\nEnter element [%d] = %d",i,arr[i]);
    }
//  value =arr[0];
    //after deletion

    printf("\n After deletion \n");
    for(i=size;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
     size=size-1;

// for(i=0;i<size;i++)
// {
//     arr[i-1]=arr[i];
// }
    
    for(i=0;i<size;i++)
    {
        printf("\nEnter element [%d] = %d",i,arr[i]);
    }
    
}
