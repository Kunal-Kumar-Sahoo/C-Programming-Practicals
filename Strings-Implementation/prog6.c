// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to compare two strings without using string library functions. 

#include <stdio.h>

#define SIZE 100

int main() {
	char str1[SIZE], str2[SIZE];
	printf("Input the 1st string: ");
	fgets(str1, SIZE, stdin);
	printf("Input the 2nd string: ");
	fgets(str2, SIZE, stdin);

	int n1 = 0, n2 = 0, i;

	for(i = 0; str1[i] != '\0'; i++) {
		n1++;
	}
	for(i = 0; str2[i] != '\0'; i++) {
		n2++;
	}

	if(n1 == n2) {
		for(i = 0; i < n1; i++) {
			if(str1[i] != str2[i]) {
				printf("Strings are not equal.\n");
				return -1;
			}
		}
		printf("Strings are equal.\n"); 
	}
	else {
		printf("Strings are not equal.\n");
	}

	return 0;
}