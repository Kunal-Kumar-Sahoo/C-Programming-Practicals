// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to remove characters in String Except Alphabets. 

#include <stdio.h>

#define SIZE 100

int main() {
	char str1[SIZE], str2[SIZE];
	printf("Input the string: ");
	scanf("%[^\n]%c", str1);

	int i = 0, j = 0;
	while(str1[i] != '\0') {
		if((str1[i] >= 'A' && str1[i] <= 'Z') ||
			(str1[i] >= 'a' && str1[i] <= 'z')) {
			str2[j++] = str1[i];
		}
		i++;
	}

	printf("After removing characters except alphabets, the output string is: %s\n", str2);

	return 0;
}