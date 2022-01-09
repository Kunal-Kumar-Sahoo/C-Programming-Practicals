// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to to print next greater elements in a given unsorted array. Elements for which no greater element exist, consider next greater element as -1. 

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("Next Bigger Elements are:\n");
	for(i = 0; i < n; i++) {
		if(i < n-1) {
			for(j = i+1; j < n; j++) {
				if(arr[i] < arr[j]) {
					printf("Next bigger element of %d in the array is: %d\n", arr[i], arr[j]);
					break;
				}
			}
		}
		else {
			printf("Next bigger element of %d in the array is: -1\n", arr[i]);
		}
	}

	return 0;
}