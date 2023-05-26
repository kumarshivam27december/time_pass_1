//second method to assign the value
#include <stdio.h>
void main()
{
    int arr[5];
    arr[0]=11;
    arr[1]=22;
    arr[2]=33;
    arr[3]=44;
    arr[4]=55;
int i;
    for(i=0;i<5;i++)
    {
    printf("\n arr[%d] = %d",i,arr[i]);
    }

    printf("\narr[0] = %d",arr[0]);
    printf("\narr[1] = %d",arr[1]);
    printf("\narr[2] = %d",arr[2]);
    printf("\narr[3] = %d",arr[3]);
    printf("\narr[4] = %d",arr[4]);
}