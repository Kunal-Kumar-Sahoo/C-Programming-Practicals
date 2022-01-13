// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the sum of upper triangular elements of a matrix. 

#include <stdio.h>

int main() {
	printf("Input order of square matrix: ");
	int n; scanf("%d", &n);

	int arr[n][n], i, j, sum = 0;

	printf("Input elements of the matrix:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("element - [%d],[%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("The given matrix is:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("The elements being summed of the upper triangular matrix are: ");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			if(i < j) {
				printf("%d ", arr[i][j]);
				sum += arr[i][j];
			}
		}
	}
	printf("\nThe sum of the upper triangular matrix elements are: %d\n", sum);

	return 0;
}