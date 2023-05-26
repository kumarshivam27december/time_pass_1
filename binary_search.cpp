#include <stdio.h>

int main() {
    int arr[] = {20, 5, 33, 66, 4};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 66;
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            printf("Element found at index %d\n", mid);
            return 0;
        }

        if (arr[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }

    printf("Element not found\n");
    return 0;
}

