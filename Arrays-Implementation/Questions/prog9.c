// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the maximum and minimum element in an array. 

#include <stdio.h>

int main() {
    printf("Input the number of elements to be stored in the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    while(--i) {
        if(max < arr[i]) {
            max = arr[i];
        }
        if(min > arr[i]) {
            min = arr[i];
        }
    }

    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}