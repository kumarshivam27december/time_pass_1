#include <stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE];
    int i, max, min;
    printf("Enter %d integers:\n", SIZE);
    for(i=0; i<SIZE; i++)
    {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i=0; i<SIZE; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
