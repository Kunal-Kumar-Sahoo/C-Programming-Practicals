// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to check whether a character is digit or not. 

#include <stdio.h>

int main() {
	printf("Input a character: ");
	char c; scanf("%c", &c);

	if(c >= '0' && c <= '9') {
		printf("The entered character is a digit.\n");
	}
	else {
		printf("The entered character is not a digit.\n");
	}

	return 0;
}