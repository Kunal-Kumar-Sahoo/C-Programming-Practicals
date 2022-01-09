// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to print or display the lower triangular of a given matrix. 


#include <stdio.h>

int main() {
    printf("Input the size of the square matrix: ");
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

    printf("Setting the lower matrix zero:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i <= j) {
                printf("%d ", arr[i][j]);
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}