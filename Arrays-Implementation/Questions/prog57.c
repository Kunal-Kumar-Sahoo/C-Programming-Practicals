// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find a pair with the given difference. 

#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], diff, i, j;
	bool found;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("Input the difference value: ");
	scanf("%d", &diff);

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\nThe given difference is: %d\n", diff);

	found = false;
	for(i = 0; i < n-1; i++) {
		for(j = i+1; j < n; j++) {
			if(arr[i] - arr[j] == diff ||
				arr[j] - arr[i] == diff) {
				printf("The pair is: (%d, %d)\n", arr[i], arr[j]);
				found = true;
			}
		}
	}

	if(!found) {
		printf("No such pairs found\n");
	}

	return 0;
}