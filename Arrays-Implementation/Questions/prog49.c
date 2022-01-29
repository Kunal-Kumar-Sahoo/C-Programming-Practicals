// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to search an element in a row wise and column wise sorted matrix. 

#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Input number of rows of matrix: ");
	int rows; scanf("%d", &rows);

	printf("Input number of columns of matrix: ");
	int cols; scanf("%d", &cols);

	int arr[rows][cols], target, i, j;
	bool found = false;

	printf("Input elements in the matrix:\n");
	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			printf("element - [%d],[%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("Input target element: ");
	scanf("%d", &target);

	printf("The given array in the matrix form is:\n");
	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("The given value for searching is: %d\n", target);

	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			if(arr[i][j] == target) {
				printf("The element Found at the position in the matrix is: %d, %d\n", i, j);
				found = true;
			}
			if(arr[i][j] > target) break;
		}
	}
	if(!found) {
		printf("The element not found in the matrix\n");
	}

	return 0;
}
