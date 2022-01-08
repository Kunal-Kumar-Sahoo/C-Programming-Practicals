// Author: Kunal Kumar Sahoo
// Objective: Write a program in C for subtraction of two Matrices.

#include <stdio.h>

int main() {
    printf("Input the size of the square matrix (less than 5): ");
    int n; scanf("%d", &n);

    int A[n][n], B[n][n], i, j;

    printf("Input elements in the first matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("The first matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("The subtraction of two matrices is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", A[i][j] - B[i][j]);
        }
        printf("\n");
    }

    return 0;
}