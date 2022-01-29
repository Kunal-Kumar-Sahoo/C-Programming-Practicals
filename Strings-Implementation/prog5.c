// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to count the total number of words in a string. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	int n = 0, i, count = 1;

	while(str[n++] != '\0');

	for(i = 0; i < n-1; i++) {
		if(str[i] == ' ' && 
			((str[i+1] >= 'A' && str[i] <= 'Z') ||
			 (str[i+1] >= 'a' && str[i]) <= 'z')) {
			count++;
		}
	}
	printf("Total number of words in the string are: %d\n", count);

	return 0;
}
