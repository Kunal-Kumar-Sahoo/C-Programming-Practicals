// Author: Kunal Kumar Sahoo
// Objective: Write a C programming to find the repeated character in a given string. 

#include <stdio.h>

#define SIZE 100

int main() {
	char str[SIZE], temp, max_rep;

	printf("Input a string: ");
	scanf("%[^\n]%c", str);

	int count, max_count = 1, i, j;
	for(i = 0; str[i] != '\0'; i++) {
		temp = str[0];
		count = 1;
		for(j = i+1; str[j] != '\0'; j++) {
			if(str[i] == str[j]) {
				count++;
			}
		}
		if(count > 1 && count > max_count) {
			max_rep = str[i];
			max_count = count;
		}
	}

	if(max_count > 1) {
		printf("The most repetitive character in '%s' is: %c\n", str, max_rep);
	}
	else {
		printf("No character is repeated in '%s'\n", str);
	}

	return 0;
}