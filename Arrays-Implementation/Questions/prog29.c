
// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to accept a matrix and determine whether it is a sparse matrix. 

#include <stdio.h>

int main() {
    printf("Input the number of rows of the matrix: ");
    int rows; scanf("%d", &rows);
    printf("Input the number of columns of the matrix: ");
    int columns; scanf("%d", &columns);

    int arr[rows][columns], i, j, freq_zero = 0, freq_others = 0;

    printf("Input elements in the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("element - [%d],[%d] : ");
            scanf("%d", &arr[i][j]);

            if(arr[i][j] == 0) {
                freq_zero++;
            }
            else {
                freq_others++;
            }
        }
    }

    if(freq_zero > freq_others) {
        printf("The given matrix is sparse matrix.\n");
    }
    else {
        printf("The given matrix is not a sparse matrix.\n");
    }
    printf("There are %d number of zeros in the matrix.\n", freq_zero);

    return 0;
}