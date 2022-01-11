// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to replace every element with the greatest element on its right side. 

#include <stdio.h>
#include <limits.h>

int main() {
	printf("Input size of the array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, max, temp;

	printf("Input %d elements for the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	for(i = 0; i < n-1; i++) {
		max = INT_MIN;
		for(j = i+1; j < n; j++) {
			if(arr[j] > max) {
				max = arr[j];
			}
		}
		arr[i] = max;
	}
	arr[n-1] = 0;

	printf("\nAfter replacements, the modified array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}