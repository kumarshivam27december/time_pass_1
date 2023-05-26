#include <stdio.h>
#define SIZE 10
void main()
{
  int arr[SIZE];
  int i;
  int sum,odd_sum=0,even_sum=0;
 
  for(i=0;i<SIZE;i++)
  {
    printf("\n Enter Element [%d] = ",i);
    scanf("%d",&arr[i]);
  }
  for(i=0;i<SIZE;i++)
  { 
    if(arr[i]%2!=0){
    odd_sum=odd_sum+arr[i];
    }
    else{
        even_sum=even_sum+arr[i];
    }
  }
  printf("\n The sum of all even element of arr = %d",even_sum);
  printf("\n The sum of all odd  element of arr = %d",odd_sum );
  printf("\n The sum of all the  element  of arr = %d",even_sum+odd_sum);

}

