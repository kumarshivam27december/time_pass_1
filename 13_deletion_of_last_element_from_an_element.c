/*
Author-Shivam kumar
Date-24/03/2023
Topic-deleting a new an element in the end of the array
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

    //after deletion
   

    printf("\n After deletion \n");
    value=arr[size-1];

    size=size-1;


    
    for(i=0;i<size;i++)
    {
        printf("\nEnter element [%d] = %d",i,arr[i]);
    }
    
}
