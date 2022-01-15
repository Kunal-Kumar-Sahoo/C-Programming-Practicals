// 20. Write a program in C to find the largest and smallest word in a string. 
// Test Data :
// Input the string : It is a string with smallest and largest word.
// Expected Output :
// The largest word is 'smallest'
// and the smallest word is 'a' 
// in the string : 'It is a string with smallest and largest word.'.

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
	char string[SIZE];
	printf("Input the string: ");
	fgets(string, SIZE, stdin);

	char words[SIZE][SIZE], small[SIZE], large[SIZE];
	int i = 0, j = 0, k;

	for(k = 0; string[k] != '\0'; k++) {
		if(string[k] != ' ' && string[k] != '\0') {
			words[i][j++] = string[k];
		}
		else {
			words[i][j] = '\0';
			i++;
			j = 0;
		}
	} 
	strcpy(small, words[0]);
	strcpy(large, words[0]);

	for(k = 0; k <= i; k++) {
		if(strlen(small) > strlen(words[k])) {
			strcpy(small, words[k]);
		}
		if(strlen(large) < strlen(words[k])) {
			strcpy(large, words[k]);
		}
	}

	printf("The largest word is '%s'\nand the smallest word is '%s'\nin the string: %s", large, small, string);

	return 0;
}