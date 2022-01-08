// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the second largest element in an array. 

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

    int max = INT_MIN, secmax = INT_MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            secmax = max;
            max = arr[i];
        }
        else {
            if(secmax < arr[i]) {
                secmax = arr[i];
            }
        }
    }

    printf("The second largest element in the array is: %d\n", secmax);

    return 0;
}