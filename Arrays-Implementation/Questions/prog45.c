// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find maximum product subarray in a given array. 

#include <stdio.h>

int main() {
	printf("Input size of the array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, prod, max_prod;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	max_prod = 1;

	for(i = 0; i < n-1; i++) {
		prod = 1;
		for(j = i; j < n; j++) {
			prod *= arr[j];
		}
		if(prod > max_prod) {
			max_prod = prod;
		}
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\nThe maximum product of a sub-array in the given array is: %d\n", max_prod);

	return 0;
}