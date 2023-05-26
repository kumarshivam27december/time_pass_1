#include <stdio.h>
#define SIZE 10
void main()
{
  int arr[SIZE];
  int i;
  int sum=0;
  for(i=0;i<SIZE;i++)
  {
    printf("\n Enter Element [%d] = ",i);
    scanf("%d",&arr[i]);
  }
  for(i=0;i<SIZE;i++)
  { 
    if(arr[i]%2==0){
    sum=sum+arr[i];
    }
  }
  printf("\n The sum of all even element of arr = %d",sum);
}
