// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find transpose of a given matrix. 

#include <stdio.h>

int main() {
	printf("Input the rows and columns of the matrix: ");
	int rows, cols; scanf("%d %d", &rows, &cols);

	int arr[rows][cols], t_arr[cols][rows], i, j;

	printf("Input the elements in the matrix:\n");
	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			printf("element - [%d].[%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("The matrix is:\n");
	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			t_arr[j][i] = arr[i][j];
		}
	}

	printf("The transpose of the matrix is:\n");
	for(i = 0; i < cols; i++) {
		for(j = 0; j < rows; j++) {
			printf("%d ", t_arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}