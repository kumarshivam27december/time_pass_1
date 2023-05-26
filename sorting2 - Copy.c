#include <stdio.h>
void main()
{
	int i,j,temp,size,arr[100];
	printf("Enter size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter element arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n before sorting");
	for(i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	
	}
	printf("\n after sorting");
	for(i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	
	}
}
