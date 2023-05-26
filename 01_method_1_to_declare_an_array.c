// Array declaration
// Method 1
//  []  is subscript operator
//   datatype <identifier>[size];
#include <stdio.h>
void main()
{
    //int arr[5];//arr[0]=>this is ground element,arr[1],arr[2],arr[3],arr[4]
    //1. Assign values to array elements declaration
    //First method
    /*
    1st index is called lower bound (lb)=0
    last index is called upper bound (ub)=size-1

    */
   //do not redeclare arr[5]
   int arr[5]={10,20,30,40,50};
   int i;
   //print(display) array elements (value)
//    printf("\n arr[0] = %d",arr[0]);
//    printf("\n arr[1] = %d",arr[1]);
//    printf("\n arr[2] = %d",arr[2]);
//    printf("\n arr[3] = %d",arr[3]);
//    printf("\n arr[4] = %d",arr[4]);

   //we can also use loop to print all these 
   for(i=0;i<5;i++)
{
    printf("\n arr[%d] = %d",i,arr[i]);
}

}