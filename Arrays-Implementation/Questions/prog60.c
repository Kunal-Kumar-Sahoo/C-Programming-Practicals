// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to rearrange positive and negative numbers alternatively in a given array.

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, temp;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	for(i = 0; i < n; i++) {
		if(arr[i] < 0) {
			for(j = i+2; j < n; j++) {
				if(arr[j] > 0) {
					temp = arr[i+1];
					arr[i+1] = arr[j];
					arr[j] = temp;
					break;
				}
			}
		}
		else {
			for(j = i+2; j < n; j++) {
				if(arr[j] < 0) {
					temp = arr[i+1];
					arr[i+1] = arr[j];
					arr[j] = temp;
					break;
				}
			}
		}
	}

	printf("\nThe re-arranged array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}