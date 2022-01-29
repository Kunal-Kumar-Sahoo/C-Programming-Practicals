// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i]. 

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, prod = 1;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
		prod *= arr[i];
	}

	printf("\nThe product array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", prod / arr[i]);
	}
	printf("\n");

	return 0;
}
