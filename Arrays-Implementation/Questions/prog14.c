// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to insert New value in the array (unsorted list ). 

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, arr[MAX_SIZE], target, target_idx, i;
    
    printf("Input size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &target);
    printf("Input the position, where the value is to be inserted: ");
    scanf("%d", &target_idx); target_idx--;

    printf("The current list of the array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    for(i = n-1; i >= target_idx; i--) {
        arr[i+1] = arr[i];
    }
    arr[target_idx] = target;

    printf("\nThe new list of array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");



    return 0;
}