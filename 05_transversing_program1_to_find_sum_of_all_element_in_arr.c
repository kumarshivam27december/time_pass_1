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
    sum=sum+arr[i];
  }
  printf("\n The sum of all element of arr = %d",sum);
}

/*
dry run 
step 1
i=0  i<size(10)  i++   
0     true       1     printf(enter element)    scanf(user_input)
1     true       2      ,,                        ,,
2     true       3       ,,                           ,,
||
||
||
||
9    true       10     ,,                          ,,
10   false      will not go further
*/