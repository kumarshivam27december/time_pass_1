#include <stdio.h>
void main()
{
	int input,i,j,temp;
	printf("Enter the size of input = ");
	scanf("%d",&input);
	int arr[100];
	for(i=0;i<input;i++)
	{
		printf("\nEnter element arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nbefore sorting ");
	for(i=0;i<input;i++)
	{
		printf(" %d",arr[i]);
		
	}
	
	for(i=0;i<input;i++)
	{
		for(j=0;j<input;j++)
		{
		  if (arr[i] > arr[j]){
         temp=arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
		}
	}
}
	printf("\n After sorting ");
	for(i=0;i<input;i++)
	{
		printf(" %d",arr[i]);
	}
	
}
