// Author: Kunal Kumar Sahoo
// Objective: Write a program in C for a 2D array of size 3x3 and print the matrix. 

#include <stdio.h>

#define rows 3
#define cols 3

int main() {
    int arr[rows][cols], row, col;

    printf("Input elements in the matrix:\n");
    for(row = 0; row < rows; row++) {
        for(col = 0; col < cols; col++) {
            printf("element - [%d],[%d] : ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }

    printf("The matrix is:\n");
    for(row = 0; row < rows; row++) {
        for(col = 0; col < cols; col++) {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}