// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to check whether a letter is lowercase or not. 

#include <stdio.h>

int main() {
	printf("Input a character: ");
	char c; scanf("%c", &c);

	if(c >= 'a' && c <= 'z') {
		printf("The entered letter is a lowercase letter.\n");
	}
	else {
		printf("The entered letter is not a lowercase letter.\n");
	}

	return 0;
}
