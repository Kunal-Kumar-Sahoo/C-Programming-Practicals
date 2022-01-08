// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to sort elements of the array in descending order. 

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Input the size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int j, temp; bool swapped;

    for(i = 0; i < n-1; i++) {
        swapped = false;
        for(j = 1; j < n-i; j++) {
            if(arr[j] > arr[j-1]) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }

    printf("Elements of array in sorted descending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}