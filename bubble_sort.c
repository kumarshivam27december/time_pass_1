#include <stdio.h>
void main()
{
/*
//// reverse  bubble sort & bubble sort
////algoruthm is a design phase
*/
int arr[]={-2,45,0,11,-9};
int step,i,temp;
int size = sizeof(arr)/sizeof(arr[0]);// size of will return bit bcz every os dependent
for (step=0;step<size;step++) // size ki pplace par size-1 bhi kar sakte hai
{
   for(i=0;i<size-1-step;i++){
          if (arr[i]>arr[i+1])
          {
               temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
               /*
               temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
               */
          }
   }
}
printf("\n\n the value after swapping \n\n");
// print the array element
for(i=0;i<size;i++)
{
   printf(" %d ",arr[i]);
}
}

