// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the median of two sorted arrays of different size. 

#include <stdio.h>

int main() {
	printf("Input the size of array-1: ");
	int n1; scanf("%d", &n1);

	printf("Input the size of array-2: ");
	int n2; scanf("%d", &n2);

	int arr1[n1], arr2[n2], i;
	float med1, med2;

	printf("Input %d elements in the first array:\n", n1);
	for(i = 0; i < n1; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr1[i]);
	}

	printf("Input %d elements in the second array:\n", n2);
	for(i = 0; i < n2; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr2[i]);
	}

	printf("The given array - 1 is: ");
	for(i = 0; i < n1; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\nThe given array - 2 is: ");
	for(i = 0; i < n2; i++) {
		printf("%d ", arr2[i]);
	}

	med1 = (n1 % 2 == 1) ? (float)arr1[(n1-1)/2] : (arr1[n1/2] + arr1[n1/2+1])/2.0;
	med2 = (n2 % 2 == 1) ? (float)arr2[(n2-1)/2] : (arr2[n2/2] + arr2[n2/2+1])/2.0;

	printf("\nThe median of two sorted arrays is: %f\n", (med1+med2)/2);

	return 0;
}