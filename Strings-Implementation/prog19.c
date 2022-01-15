// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to Concatenate Two Strings Manually. 

#include <stdio.h>

#define SIZE 100

int main() {
	char str1[SIZE], str2[SIZE];
	printf("Input the first string: ");
	fgets(str1, SIZE, stdin);
	printf("Input the second string: ");
	fgets(str2, SIZE, stdin);

	int n1 = 0, n2 = 0, i;

	while(str1[n1++] != '\0'); n1 -= 2;
	while(str2[n2++] != '\0'); n2 -= 2;

	str1[n1] = ' ';

	for(i = 0; i < n2; i++) {
		str1[n1+1+i] = str2[i];
	}

	printf("After concatenation the string is:\n%s\n", str1);

	return 0;
}