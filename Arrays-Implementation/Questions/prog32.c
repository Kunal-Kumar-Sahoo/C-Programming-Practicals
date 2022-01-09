// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find a pair with given sum in the array. 

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter the size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i, j, sum;
    
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the given sum: ");
    scanf("%d", &sum);

    bool ans = false;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                ans = true;
                printf("Pair of elements can make the given sum by the value of index %d and %d\n", i, j);
            }
        }
    }
    if(!ans) {
        printf("No such two elements found\n");
    }

    return 0;
}