// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to count the number of punctuation characters exists in a string. 

#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE]; scanf("%[^\n]%c", str);

	int count = 0, i;
	for(i = 0; str[i] != '\0'; i++) {
		if(ispunct(str[i])) {
			count++;
		}
	}

	printf("The number of punctuation characters in the string is: %d\n", count);

	return 0;
}