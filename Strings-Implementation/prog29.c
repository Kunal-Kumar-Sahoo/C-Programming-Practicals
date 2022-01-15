// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to split string by space into words. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input a string: ");
	char str[SIZE]; fgets(str, SIZE, stdin);

	printf("Strings or words after split by spaces are:\n");
	int i = 0;
	while(str[i] != '\0') {
		if(str[i] == ' ') {
			printf("\n");
		}
		else {
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");

	return 0;
} 