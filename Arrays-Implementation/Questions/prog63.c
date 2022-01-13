// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on. 

#include <stdio.h>
#include <limits.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, max, min, max_idx, min_idx;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	for(i = 0; i < n-1; i++) {
		max = INT_MIN, min = INT_MAX;
		for(j = i; j < n; j++) {
			if(arr[j] > max) {
				max = arr[j];
				max_idx = j;
			}
			if(arr[j] < min) {
				min = arr[j];
				min_idx = j;
			}
		}
		if(i % 2 == 0) {
			arr[min_idx] = arr[i];
			arr[i] = min;
		}
		else {
			arr[max_idx] = arr[i];
			arr[i] = max;
		}
	}

	printf("\nThe new array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}