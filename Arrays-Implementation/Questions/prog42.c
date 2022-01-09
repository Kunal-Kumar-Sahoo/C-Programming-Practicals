// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to check whether an array is subset of another array. 

#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Input the size of larger array: ");
	int n1; scanf("%d", &n1);

	printf("Input the size of the smaller array: ");
	int n2; scanf("%d", &n2);

	int set[n1], sub_set[n2], i, j;

	printf("Input %d elements for the larger array:\n", n1);
	for(i = 0; i < n1; i++) {
		printf("element - %d : ", i);
		scanf("%d", &set[i]);
	}

	printf("Input %d elements for the smaller array:\n", n2);
	for(j = 0; j < n2; j++) {
		printf("element - %d : ", i);
		scanf("%d", &sub_set[j]);
	}

	printf("The given first array is: ");
	for(i = 0; i < n1; i++) {
		printf("%d ", set[i]);
	}

	printf("\nThe given second aray is: ");
	for(j = 0; j < n2; j++) {
		printf("%d ", sub_set[j]);
	}

	bool ans, is_subset;
	for(i = 0; i < n2; i++) {
		ans = false;
		for(j = 0; j < n1; j++) {
			if(sub_set[i] == set[j]) {
				ans = true;
				break;
			}
		}
		if(!ans) break;
	}

	if(ans) {
		printf("\nThe second array is the subset of the first array.\n");
	}
	else {
		printf("\nThe second array is the subset of the first array.\n");
	}

	return 0;
}