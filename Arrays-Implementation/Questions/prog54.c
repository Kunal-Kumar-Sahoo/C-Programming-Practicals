// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to generate a random permutation of array elements. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, tmp;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	srand(time(0));
	for(i = n-1; i > 0; i--) {
		j = (rand() % (n));
		printf("\n%d", j);
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	printf("\nThe shuffled elements in the array are:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}