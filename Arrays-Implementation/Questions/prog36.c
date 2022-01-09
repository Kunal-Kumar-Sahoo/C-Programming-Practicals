// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the missing number from a given array. There are no duplicates in list. 


#include <stdio.h>
#include <limits.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, max = INT_MIN, sum = 0;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);

		if(arr[i] > max) {
			max = arr[i];
		}

		sum += arr[i];
	}

	int missing = max * (max + 1) / 2 - sum;

	if(missing) {
		printf("The missing number is: %d\n", missing);
	}
	else {
		printf("No number missing in between\n");
	}

	return 0;
}