#include <stdio.h>
#define sze 5
void main()
{
    int arr[sze];
    int i,item,location=-1;
    for(i=0;i<sze;i++)
    {
        printf("\n Element [%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the value for searching = ");
    scanf("%d",&item);
    for(i=0;i<sze;i++)
    {
        if(arr[i]==item)
        {
            location=i;
            break;
        }
    }
    if(location==-1)
     printf("\n value %d not exists in the list",item);
    else
     printf("\n value %d exist in the list at location %d",item,location);
}