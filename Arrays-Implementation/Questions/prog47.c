// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the median of two sorted arrays of same size. 

#include <stdio.h>

int main() {
	printf("Input the size of two arrays: ");
	int n; scanf("%d", &n);

	int arr1[n], arr2[n], i;
	float med1, med2;

	printf("Input %d elements in the first array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr1[i]);
	}

	printf("Input %d elements in the second array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr2[i]);
	}

	printf("The given array - 1 is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\nThe given array - 2 is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr2[i]);
	}

	if(n % 2) {
		med1 = arr1[(n+1)/2-1];
		med2 = arr2[(n+1)/2-1];
	}
	else {
		med1 = (arr1[n/2-1] + arr1[n/2]) / 2;
		med2 = (arr2[n/2-1] + arr2[n/2]) / 2;
	}
	printf("\nThe median of two sorted arrays is: %f\n", (med1+med2)/2.0);

	return 0;
}