// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to check whether a letter is lowercase or not. 

#include <stdio.h>

int main() {
	printf("Input a character: ");
	char c; scanf("%c", &c);

	if(c >= 'A' && c <= 'Z') {
		printf("The entered letter is an lowercase letter.\n");
	}
	else {
		printf("The entered letter is not an lowercase letter.\n");
	}

	return 0;
}