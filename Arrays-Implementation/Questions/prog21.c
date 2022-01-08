// Author: Kunal Kumar Sahoo
// Objective: Write a program in C for multiplication of two square Matrices. 

#include <stdio.h>

int main() {
    int r1, r2, c1, c2;
    printf("Input the rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Input the rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 == r2) {
        int a[r1][c1], b[r2][c2], i, j, k;

        printf("Input the elements in the first matrix:\n");
        for(i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Input the elements in the second matrix:\n");
        for(i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        printf("The first matrix is:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("The first matrix is:\n");
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        printf("The multiplication of tow matrices is:\n");
        int sum;
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                sum = 0;
                for(k = 0; k < r2; k++) {
                    sum += a[i][k] * b[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }

    else {
        printf("Multplication of matrices of given dimensions is not possible.\n");
    }

    return 0;
}