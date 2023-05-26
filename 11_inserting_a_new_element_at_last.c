/*
Author-Shivam kumar
Date-24/03/2023
Topic-inserting a new an element in the end of the array
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
    //before insertion
    
    printf("\n Before insertion \n");
    for(i=0;i<size;i++)
    {
        printf("\nEnter element [%d] = %d",i,arr[i]);
    }

    //after insertion
    printf("\nEnter the value for insertion");
    scanf("%d",&value); //ask the value
    arr[size]=value;// last me value add kardo
    size=size+1;// size increse kardo

    printf("\n After insertion \n");

    
    for(i=0;i<size;i++)
    {
        printf("\nEnter element [%d] = %d",i,arr[i]);
    }
    
}
