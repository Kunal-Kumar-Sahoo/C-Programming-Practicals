// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the sum of all elements of the array. 

#include <stdio.h>

int main() {
    printf("Input the number of elements to be stored in the array: ");
    int n; scanf("%d", &n);

    int arr[n], i; 
    
    printf("Input %d elements in the array:\n");
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    long sum = 0;
    while(--i >= 0) {
        sum += arr[i];
    }

    printf("Sum of all elements stored in the array is: %ld\n", sum);

    return 0;
}