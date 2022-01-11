// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i]. 

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], prod_arr[n], i, j, prod;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	for(i = 0; i < n; i++) {
		prod = 1;
		for(j = 0; j < n; j++) {
			if(j != i) {
				prod *= arr[j];
			}
		}
		prod_arr[i] = prod;
	}

	printf("\nThe product array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", prod_arr[i]);
	}
	printf("\n");

	return 0;
}