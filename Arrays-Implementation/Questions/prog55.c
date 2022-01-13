// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the maximum repeating number in a given array. 
#include <stdio.h>

int main() {
	printf("Input the size of the array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, mode, freq, max_freq;

	printf("Input %d elements in the array:\n");
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	mode = arr[0];
	freq = max_freq = 1;
	for(i = 1; i < n-1; i++) {
		for(j = i+1; j < n; j++) {
			if(arr[i] == arr[j]) {
				freq++;
			}
		}
		if(freq > max_freq) {
			max_freq = freq;
			mode = arr[i];
		}
	}

	printf("\nThe maximum repeating number is: %d\n", mode);

	return 0;
}