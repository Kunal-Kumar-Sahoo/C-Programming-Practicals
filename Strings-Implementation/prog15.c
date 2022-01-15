// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE];
	scanf("%[^\n]%c", str);

	printf("The given sentence is: %s\n", str);

	int i;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += ('a'-'A');
		}
		else if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= ('a'-'A');
		}
	}

	printf("After case swapping the string is: %s\n", str);

	return 0;
}