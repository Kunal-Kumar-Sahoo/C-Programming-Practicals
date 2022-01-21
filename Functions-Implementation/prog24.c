// Write a C program to find maximum and minimum elements in array using recursion.

#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int findMin(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return min(arr[n-1], findMin(arr, n-1));
}

int findMax(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return max(arr[n-1], findMax(arr, n-1));
}


int main() {
    printf("Enter size of the array: ");
    int n; scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) 
        scanf("%d", arr+i);
    
    printf("Minimum element of the array: %d\n", findMin(arr, n));
    printf("Maximum element of the array: %d\n", findMax(arr, n));

    return 0;
}
