// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to delete an element at desired position from an array. 

#include <stdio.h>

int main() {
    printf("Input the size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;
    
    printf("Input %d elements in the array in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the position where to delete: ");
    int pos; scanf("%d", &pos); pos--;

    for(i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    } 
    
    printf("The new list is: ");
    for(i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}