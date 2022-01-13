// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to print individual characters of string in reverse order. 

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	int i;
	for(i = strlen(str)-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}