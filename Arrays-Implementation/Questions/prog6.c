// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to print all unique elements in an array. 

#include <stdio.h>

int main() {
    printf("Input the number of elements to be stored in the array: ");
    int n; scanf("%d", &n);

    int arr[n], i, j, c;

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are:\n");
    for(i = 0; i < n; i++) {
        c = 0;
        for(j = 0; j < n; j++) {
            if( i != j) {
                if(arr[i] == arr[j]) {
                    c++;
                }
            }
        }
        if(!c) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}