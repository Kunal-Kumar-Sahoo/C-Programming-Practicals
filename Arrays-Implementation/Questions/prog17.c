// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the second smallest element in an array. 

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Input the size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;
    
    printf("Input %d elements in the array:\n");
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX, secmin = INT_MAX;

    for(i = 0; i < n; i++) {
        if(arr[i] < min) {
            secmin = min;
            min = arr[i];
        }
        else {
            if(secmin > arr[i]) {
                secmin = arr[i];
            }
        }
    }

    printf("The second smallest element in the array is: %d\n", secmin);

    return 0;
}