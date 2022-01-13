// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the minimum distance between two numbers in a given array. 

#include <stdio.h>
#include <limits.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, num1, num2, min_dist;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("Input two numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	min_dist = INT_MAX;

	for(i = 0; i < n-1; i++) {
		for(j = i+1; j < n; j++) {
			if(arr[i] == num1 && arr[j] == num2) {
				if(min_dist > j-i) { 
					min_dist = j-i;
				}
			}
		}
	}

	printf("\nThe minimum distance between %d and %d is: %d\n", num1, num2, min_dist);

	return 0;
}