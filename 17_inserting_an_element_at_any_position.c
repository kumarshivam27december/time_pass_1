// C Program to Insert an element
// at a specific position in an Array
 
#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, position, n;
    printf("size of the array = ");
    scanf("%d",&n);
 
    
    for (i = 0; i <n; i++)
   {
    printf("Enter the element [%d] = ",i);
    scanf("%d",&arr[i]);
   }
 
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // element to be inserted
    
    printf("Element to be inserted = ");
    scanf("%d",&x);
 
    // position at which element
    // is to be inserted
    printf("Enter the position where it is to be inserted = ");
    scanf("%d",&position);
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n - 1; i >= position; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[position - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}