// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to count total number of alphabets, digits and special characters in a string. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	int i = 0, alphabets = 0, digits = 0, spc_chars = 0;
	while(str[i++] != '\0') {
		if((str[i] >= 'A' && str[i] <= 'Z') || 
			str[i] >= 'a' && str[i] <= 'z') {
			alphabets++;
		}
		else if(str[i] >= '0' && str[i] <= '9') {
			digits++;
		}
		else {
			spc_chars++;
		}
	}

	printf("Number of Alphabets in the string is: %d\n", alphabets);
	printf("Number of Digits in the string is: %d\n", digits);
	printf("Number of Special characters in the string is: %d\n", spc_chars);

	return 0;
}