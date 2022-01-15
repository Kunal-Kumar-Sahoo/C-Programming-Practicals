// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to print only the string before new line character. 

#include <stdio.h>
#include <ctype.h>

int main() {
	int i = 0;
	char str[] = "The quick brown fox \n jumps over the \n lazy dog.";
	while(isprint(str[i])) {
		putchar(str[i++]);
	}
	printf("\n");

	return 0;
}
