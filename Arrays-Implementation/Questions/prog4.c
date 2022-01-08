// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to copy the elements of one array into another array. 

#include <stdio.h>

int main() {
    printf("Input the number of elements to be stored in the array: ");
    int n; scanf("%d", &n);

    int arr1[n], arr2[n], i;

    printf("Input %d elements in the array:\n");
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("The elements stored in the first array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nThe elements stored in the second array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}