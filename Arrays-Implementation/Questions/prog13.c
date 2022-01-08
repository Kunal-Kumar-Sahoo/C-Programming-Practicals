// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to insert New value in the array (sorted list ).. 

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, arr[MAX_SIZE], i, target, target_idx;
    printf("Input the size of the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &target);

    printf("The existing array list is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int start = 0, end = n-1, mid;
    while(start <= end) {
        mid = (start + end) / 2;
        if(arr[mid] == target) {
            target_idx = mid;
            break;
        }
        else if(arr[mid] < target) {
            target_idx = mid+1;
            start = mid+1;
        }
        else end = mid-1;
    }

    for(i = n-1; i >= target_idx; i--) {
        arr[i+1] = arr[i];
    }
    arr[target_idx] = target;

    printf("\nThe array after adding new value:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}