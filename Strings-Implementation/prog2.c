// Objective: Write a program in C to find the length of a string without using library function. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	int len = 0;

	while(str[len++] != '\0');
	len--; // To avoid the inclusion of '\0'

	printf("Length of the string is: %d\n", len);

	return 0;
}