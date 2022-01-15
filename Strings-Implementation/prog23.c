// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to check whether a letter is uppercase or not. 

#include <stdio.h>

int main() {
	printf("Input a character: ");
	char c; scanf("%c", &c);

	if(c >= 'A' && c <= 'Z') {
		printf("The entered letter is an UPPERCASE letter.\n");
	}
	else {
		printf("The entered letter is not an UPPERCASE letter.\n");
	}

	return 0;
}