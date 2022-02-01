// Write a program in C to get the largest element of an array using the function. 

#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int findMax(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return max(arr[n-1], findMax(arr, n-1));
}

int main() {
    printf("Enter the size of the array: ");
    int n; scanf("%d", &n); int arr[n];

    printf("Input %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", arr+i);
    }
    printf("Largest element in the array: %d\n", findMax(arr, n));
    
    return 0;
}
