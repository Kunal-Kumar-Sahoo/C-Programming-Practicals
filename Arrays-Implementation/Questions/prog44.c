// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the row with maximum number of 1s. 

#include <stdio.h>

int main() {
	printf("Input number of rows for 2-D array: ");
	int rows; scanf("%d", &rows);
	printf("Input number of columns for 2-D array: ");
	int cols; scanf("%d", &cols);

	int arr[rows][cols], i, j;

	printf("Input elements for the 2-D array:\n");
	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			printf("element - [%d],[%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("The given 2-D array is:\n");
	for(i = 0; i < rows; i++) {
		for(j = 0; j < rows; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	int count = 0, max_count = 0, idx;

	for(i = 0; i < rows; i++) {
		count = 0;
		for(j = 0; j < cols; j++) {
			if(arr[i][j] == 1) {
				count++;
			}
		}
		if(max_count < count) {
			max_count = count;
			idx = i;
		}
	}
	printf("The index of row with maximum 1s is: %d\n", idx);

	return 0;
}