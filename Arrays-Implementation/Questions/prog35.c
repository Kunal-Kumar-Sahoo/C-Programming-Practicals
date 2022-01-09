// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the largest sum of contiguous subarray of an array. 
// Expected Output :
// The given array is : 8 3 8 -5 4 3 -4 3 5
// The largest sum of contiguous subarray is : 21

#include <stdio.h>

int main() {
    printf("Input the size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i, j, sum, max_sum;

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    max_sum = arr[0];
    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = i; j < n; j++) {
            sum += arr[j];
            if(sum > max_sum) {
                max_sum = sum;
            }
        }
    }

    printf("The largest sum of contiguous subarray is: %d\n", max_sum);

    return 0;
}