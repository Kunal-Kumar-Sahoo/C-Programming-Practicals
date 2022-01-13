// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to update every array element with multiplication of previous and next numbers in array. 

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], prod[n], i;

	printf("Input %d elements in the array\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	prod[0] = arr[0] * arr[1];
	prod[n-1] = arr[n-1] * arr[n-2];

	for(i = 1; i < n-1; i++) {
		prod[i] = arr[i-1] * arr[i+1];
	}

	printf("\nThe new array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", prod[i]);
	}
	printf("\n");

	return 0;
}