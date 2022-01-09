// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to accept two matrices and check whether they are equal. 

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Input rows and columns of the 1st matrix: ");
    int r1, c1; scanf("%d %d", &r1, &c1);
    printf("Input rows and columns of the 2nd matrix: ");
    int r2, c2; scanf("%d %d", &r2, &c2);

    if(r1 == r2 && c1 == c2) {
        printf("The matrices are comparable.\n");

        int a[r1][c1], b[r2][c2], i, j;

        printf("Input the elements in the first matrix:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Input the elements in the second matrix:\n");
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
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

        printf("The second matrix is:\n");
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        bool answer = true;
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                if(a[i][j] != b[i][j]) {
                    answer = false;
                    break;
                }
            }
        }

        if(answer) {
            printf("The two matrices are equal.\n");
        }
        else {
            printf("The two matrices are not equal.\n");
        }
    }
    else {
        printf("The matrices are not comparable.\n");
    }
}