// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find if a given integer x appears more than n/2 times in a sorted array of n integers. 
// Expected Output :
// The given array is : 1 3 3 5 4 3 2 3 3
// The given value is : 3
// 3 appears more than 4 times in the given array[]

#include <stdio.h>

int main() {
	printf("Input the size of array: ");
	int n; scanf("%d", &n);

	int arr[n], i, target, cnt, target_cnt;

	if(n % 2) {
		target_cnt = (n-1) / 2;
	}
	else {
		target_cnt = n / 2;
	}

	printf("Input %d elements in the array:\n", n);
	for(i = 0; i < n; i++) {
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("Input the value: ");
	scanf("%d", &target);

	printf("The given array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\nThe given value is: %d\n", target);

	cnt = 0;
	while(--i >= 0) {
		if(arr[i] == target){
			cnt++;
		}
	}

	if(cnt > target_cnt) {
		printf("%d appears more than %d times in the given array.\n", target, target_cnt);
	}
	else {
		printf("%d appears less than %d times in the given array.\n", target, target_cnt);
	}

	return 0;
}