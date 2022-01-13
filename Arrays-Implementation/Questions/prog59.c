// Author: Kunal Kumar Sahoo
// Objective: Write a program in C that checks whether the elements in an array are sorted or not. 

#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i;
	bool asc, desc;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++){
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	for(i = 0; i < n-1; i++) {
		if(arr[i] < arr[i+1]) {
			asc = true;
		}
		else{
			asc = false;
			break;
		}
	}

	for(i = 0; i < n-1; i++) {
		if(arr[i] > arr[i+1]) {
			desc = true;
		}
		else{
			desc = false;
			break;
		}
	}

	if(asc || desc) {
		printf("\nThe elements of the array are sorted.\n");
	}
	else {
		printf("\nThe elements of the array are not sorted.\n");
	}

	return 0;
}