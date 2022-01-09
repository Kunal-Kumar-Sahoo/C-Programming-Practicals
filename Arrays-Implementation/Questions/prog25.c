// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find sum of rows and columns of a Matrix. 

#include <stdio.h>

int main() {
    printf("Input the size of the matrix: ");
    int n; scanf("%d", &n);

    int arr[n][n], i, j;

    printf("Input elements in the matrix:\n");
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

    long sum;
    printf("The sum of rows and columns of the matrix is:\n");
    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf(" %ld\n", sum);
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = 0; j < n; j++) {
            sum += arr[j][i];
        }
        printf("%ld ", sum);
    }
    printf("\n");

    return 0;
}