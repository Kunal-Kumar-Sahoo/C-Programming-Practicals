// 82. Write a program in C to print all possible combinations of r elements in a given array. 
// Expected Output:
// The given array is:
// 1 5 4 6 8 
// The combination from by the number of elements are: 4
// The combinations are:
// 1 5 4 6
// 1 5 4 8
// 1 5 6 8
// 1 4 6 8
// 5 4 6 8

// Pending

#include <stdio.h>
#include <math.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], r, i, size;

	printf("Input %d elements in array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("Input number of elements to be used for combinations: ");
	scanf("%d", &r);

	printf("The given array is:\n");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\nNumber of elements in combinations of array is: %d\n", r);

	size = tgamma(n) / (tgamma(n-r) * tgamma(r)); // In-built method for factorial.

	int combinations[size][r];

	

	return 0;
}