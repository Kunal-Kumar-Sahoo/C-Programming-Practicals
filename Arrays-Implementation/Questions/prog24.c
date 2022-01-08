// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the sum of left diagonals of a matrix. 
// Test Data :
// Input the size of the square matrix : 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Expected Output :
// The matrix is :
// 1 2
// 3 4
// Addition of the left Diagonal elements is :5

#include <stdio.h>

int main() {
    printf("Input the size of the square matrix: ");
    int n; scanf("%d", &n);

    int arr[n][n], i, j;

    printf("Input elements in the array:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    long sum = 0;
    for(i = n-1; i >= 0; i--) {
        sum += arr[i][i];
    }
    printf("Addition of the left diagonal elements is: %ld\n", sum);

    return 0;
}