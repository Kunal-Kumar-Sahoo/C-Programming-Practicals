// Author : Kunal Kumar Sahoo
// Objective: Write a program in C to merge one sorted array into another sorted array. 

#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Enter size of the bigger array: ");
	int n1; scanf("%d", &n1);
	printf("Enter size of the smaller array: ");
	int n2; scanf("%d", &n2);

	int arr1[n1], arr2[n2], arr3[n1+n2], i, j, tmp;

	printf("Input %d elements for the large array in ascending order:\n", n1);
	for(i = 0; i < n1; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr1[i]);
	}

	printf("Input %d elements for the small array in ascending order:\n", n2);
	for(i = 0; i < n2; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr2[i]);
	}

	for(i = 0; i < n1; i++) {
		arr3[i] = arr1[i];
	}
	for(i = 0; i < n2; i++) {
		arr3[n1+i] = arr2[i];
	}

	bool swapped;
	for(i = 0; i < n1+n2-1; i++) {
		swapped = false;
		for(j = 1; j < n1+n2-i; j++) {
			if(arr3[j-1] > arr3[j]) {
				tmp = arr3[j-1];
				arr3[j-1] = arr3[j];
				arr3[j] = tmp;
				swapped = true;
			}
		}
		if(!swapped) break;
	}

	printf("After merge, the new array is:\n");
	for(i = 0; i < n1+n2; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");

	return 0;
}