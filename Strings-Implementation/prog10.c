// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find maximum occurring character in a string. 
#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	int i, j, freq, max_freq;
	char mode_char;
	max_freq = 0;

	for(i = 0; str[i] != '\0'; i++) {
		freq = 0;
		for(j = 0; str[j] != '\0'; j++) {
			if(tolower(str[i]) == tolower(str[j])) {
				freq++;
			}
		}
		if(freq > max_freq) {
			mode_char = str[i];
			max_freq = freq; 
		}
	}

	printf("The Highest frequency of character '%c'\nappears number of times: %d\n", mode_char, max_freq);

	return 0;
}