// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to print individual characters of string in reverse order. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);
	
	int i, len = 0;
	while(str[len++] != '\0');
	len -= 1;

	for(i = len-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
