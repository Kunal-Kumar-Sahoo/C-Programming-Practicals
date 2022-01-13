// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to count total number of vowel or consonant in a string. 

#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE]; fgets(str, SIZE, stdin);

	int vowels = 0, consonants = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		switch(tolower(str[i])) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowels++;
			default:
				consonants++;
		}
	}

	printf("The total number of vowels in the string is: %d\n", vowels);
	printf("The total number of consonants in the string is: %d\n", consonants);

	return 0;
}