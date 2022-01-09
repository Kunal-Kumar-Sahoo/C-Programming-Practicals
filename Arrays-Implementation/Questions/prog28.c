// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to calculate determinant of a 3 x 3 matrix. 

#include <stdio.h>

int main() {
    int arr[3][3], i, j, det = 0;

    printf("Input elements in the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        det += (arr[0][i] * (arr[1][(i+1) % 3] * arr[2][(i+2) % 3] - arr[1][(i+2) % 3] * arr[2][(i+1) % 3]));
    }
    printf("The determinant of the matrix is: %d\n", det);

    return 0;
}