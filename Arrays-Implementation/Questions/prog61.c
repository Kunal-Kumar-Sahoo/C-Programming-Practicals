// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to segregate 0s and 1s in an array. 

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, freq_zero = 0;

	printf("Input %d elements in the array (0s and 1s only):\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
		if(arr[i] != 0 && arr[i] != 1) {
			printf("Please enter either 0 or 1\n");
			i--;
		}
	}

	freq_zero = 0;
	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
		if(arr[i] == 0) {
			freq_zero++;
		}
	}

	for(i = 0; i < n; i++) {
		if(i < freq_zero) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
		}
	}

	printf("\nThe array after segregation is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}