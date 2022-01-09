// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to move all zeroes to the end of a given array. 

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, idx;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
		if(arr[i] != 0) {
			idx = i;
		}
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	for(i = 0; i < idx; i++) {
		if(arr[i] == 0) {
			arr[i] = arr[idx];
			arr[idx--] = 0;
		}
	}

	printf("\nThe new array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}