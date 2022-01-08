// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to count a total number of duplicate elements in an array. 

#include <stdio.h>

int main() {
    printf("Input the number of elements to be stored in the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int unique[n], j, k = 1, c = 0;
    unique[0] = arr[0];
    for(i = 1; i < n; i++) {
        for(j = 0; j < k; j++) {
            if(arr[i] == unique[j]) {
                c++;
            } 
            else {
                if(j == k-1) {
                    unique[k] = arr[i];
                    k++;
                    break;
                }
            }
        }
    }
    printf("Total number of duplicate elements found in the array is: %d\n", c);

    return 0;
}