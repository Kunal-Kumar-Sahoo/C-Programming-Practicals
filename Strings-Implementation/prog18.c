// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to Find the Frequency of Characters. 

#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main() {
	char str[SIZE], target; 

	printf("Input the string: ");
	fgets(str, SIZE, stdin);
	printf("Input the character to find frequency: ");
	scanf("%c", &target);

	int i, freq = 0;

	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == toupper(target) || 
			str[i] == tolower(target)) {
			freq++;
		}
	}

	printf("The frequency of '%c' is: %d\n", target, freq);

	return 0;
}