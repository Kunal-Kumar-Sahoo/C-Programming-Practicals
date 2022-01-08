// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to merge two arrays of same size swapped in decending order. 

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Input the number of elements to be stored in the first array: ");
    int n1; scanf("%d", &n1); int arr1[n1], i;
    printf("Input %d elements in the array:\n", n1);
    for(i = 0; i < n1; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Input the number of elements to be stored in the second array: ");
    int n2; scanf("%d", &n2); int arr2[n2], j;
    printf("Input %d elements in the array:\n", n2);
    for(j = 0; j < n2; j++) {
        printf("element - %d : ", j);
        scanf("%d", &arr2[j]);
    }

    int arr3[n1+n2], temp;
    bool swapped;

    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        arr3[n1+j] = arr2[j];
    }

    for(i = 0; i < n1+n2-1; i++) {
        swapped = false;
        for(j = 1; j < n1+n2-i; j++) {
            if(arr3[j-1] < arr3[j]) {
                temp = arr3[j-1];
                arr3[j-1] = arr3[j];
                arr3[j] = temp;
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }

    printf("The merged array in descending order is:\n");
    for(i = 0; i < n1+n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}