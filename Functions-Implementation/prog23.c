// Write a C program to find sum of elements of array using recursion.

#include <stdio.h>

int sumOfArrayElements(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return arr[n-1] + sumOfArrayElements(arr, n-1);
}

int main() {
    printf("Enter the size of the array: ");
    int n; scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) 
        scanf("%d", arr+i);
    printf("Sum of elements of the array: %d\n", sumOfArrayElements(arr, n));
    
    return 0;
}
