// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to separate the individual characters from a string. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input a string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	int i;
	printf("The characters of the string are:\n");
	for(i = 0; str[i] != '\0'; i++) {
		printf("%c ", str[i]);
	}
	printf("\n");

	return 0;
}