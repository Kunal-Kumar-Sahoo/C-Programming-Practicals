// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find two elements whose sum is closest to zero. 

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, j, closest, sum, x, y;

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	closest = arr[1]+arr[0];
	x = 0, y = 1;

	for(i = 0; i < n-1; i++) {
		for(j = i+1; j < n; j++) {
			sum = arr[i] + arr[j];
			if(abs(sum - 0) < abs(closest - 0)) {
				closest = sum;
				x = i, y = j;
			}
		}
	}

	printf("\nThe pair of elements whose sum is minimum are:\n[%d, %d]\n", arr[x], arr[y]);

	return 0;
}