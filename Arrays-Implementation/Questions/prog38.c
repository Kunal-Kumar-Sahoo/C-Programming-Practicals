// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to rotate an array by N positions. 


#include <stdio.h>

int main() {
	printf("Input the size of the array: ");
	int n; scanf("%d", &n);

	int arr[n], i, target_idx;

	printf("Input %d elements in the array:\n");
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("Enter the position from where you want to rotate the array: ");
	scanf("%d", &target_idx);

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	int temp[target_idx];

	printf("\nBefore the %d position, the values of the array are: ", target_idx);
	for(i = 0; i < target_idx; i++) {
		temp[i] = arr[i];
		printf("%d ", temp[i]);
	}

	for(i = 0; i < n-target_idx; i++) {
		arr[i] = arr[target_idx+i];
	}

	for(i = n-target_idx; i < n; i++) {
		arr[i] = temp[i-n+target_idx];
	}

	printf("\nAfter rotating the array from %d position, the array is:\n", target_idx);
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}