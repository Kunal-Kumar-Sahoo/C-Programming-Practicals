// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to store elements in an array and print it. 

#include <stdio.h>

#define n 10

int main() {
    int arr[n], i;

    printf("Enter %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements in array are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}