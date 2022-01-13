// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find all numbers that occur odd number of times in an array. 

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], freq[n], i, j, count;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	for(i = 0; i < n-1; i++) {
		count = 1;
		for(j = i+1; j < n; j++) {
			if(arr[i] == arr[j]) {
				freq[j] = -1;
				count++;
			}
		}
		if(freq[i] != -1) {
			freq[i] = count;
		}
	}

	printf("\nThe numbers occuring odd number of times are: ");
	for(i = 0; i < n; i++) {
		if(freq[i] != -1 && freq[i] % 2) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	return 0;
}