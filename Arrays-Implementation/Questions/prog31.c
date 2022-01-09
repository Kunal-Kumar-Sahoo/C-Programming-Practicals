// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to check whether a given matrix is an identity matrix. 

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Input the number of rows of the matrix: ");
    int rows; scanf("%d", &rows);
    printf("Input the number of columns of the matrix: ");
    int columns; scanf("%d", &columns);

    if(rows == columns) {
        
        int arr[rows][columns], i, j;
        
        printf("Input elements in the matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < columns; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        printf("The matrix is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < columns; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }

        bool ans = true;
        for(i = 0; i < rows; i++) {
            for(j = 0; j < columns; j++) {
                if(i == j) {
                    if(arr[i][j] != 1) {
                        ans = false;
                        break;
                    }
                }
                else {
                    if(arr[i][j] != 0) {
                        ans = false;
                        break;
                    }
                }
            }
        }

        if(ans) {
            printf("The matrix is an identity matrix.\n");
        }
        else {
            printf("The matrix is not an identity matrix.\n");
        }

    }
    else {
        printf("Only square matrices can be checked for identity matrices.\n");
    }
    return 0;
}