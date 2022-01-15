// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to extract a substring from a given string. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	int start, length, i;
	printf("Input the position to start extraction: ");
	scanf("%d", &start);
	printf("Input the length of substring: ");
	scanf("%d", &length);

	printf("The substring retrieve from the string is: \"");
	for(i = start-1; i < start+length-1; i++) {
		printf("%c", str[i]);
	}
	printf("\"\n");

	return 0;
}