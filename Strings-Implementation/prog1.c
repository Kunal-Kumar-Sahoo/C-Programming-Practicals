// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to input a string and print it. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE]; 

	// Not using gets() because it is not supported in Linux.
	scanf("%[^\n]%c", str);

	printf("%s\n", str);

	return 0;
}