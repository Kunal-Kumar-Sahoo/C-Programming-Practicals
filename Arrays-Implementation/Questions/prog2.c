// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to read n number of values in an array and display it in reverse order. 


#include <stdio.h>

int main() {
    printf("Input the number of elements to store in the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;

    printf("Input %d elements in the array:\n");
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values stored into the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe values store into the arrat in reverse are:\n");
    while(--i >= 0) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}