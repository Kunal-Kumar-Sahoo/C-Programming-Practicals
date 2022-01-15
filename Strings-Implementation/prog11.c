// Author: Kunal Kumar Sahoo
// Objective: Write a C program to sort a string array in ascending order. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	fgets(str, SIZE, stdin);

	int i, j, n=0; char temp;

	while(str[n++] != '\0'); n -= 2; // Remove the null and an extra increment after that.

	for(i = 0; i < n-1; i++) {
		for(j = i+1; j < n; j++) {
			if(str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("After sorting the string appears like: %s\n", str);

	return 0;
}