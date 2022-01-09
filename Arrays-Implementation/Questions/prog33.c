// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the majority element of an array. 

#include <stdio.h>

int main() {
    printf("Enter the size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    /*
        Implementing: Moore's Voting Algorithm
        Reference: https://medium.com/@shahareg98/boyer-moore-voting-algorithm-5b5f11580650
    */
    int majority_idx = 0, count = 1;
    for(i = 1; i < n; i++) {
        if(arr[majority_idx] == arr[i]) {
            count++;
        }
        else {
            count--;
        }
        if(count == 0) {
            majority_idx = i;
            count = 1;
        }
    }
    count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] == arr[majority_idx]) {
            count++;
        }
    }

    if(count > n/2) {
        printf("Majority element is: %d\n", arr[majority_idx]);
    }
    else {
        printf("There is no majority element in the array\n");
    }

    return 0;
}