// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to replace the spaces of a string with a specific character. 

#include <stdio.h>

#define SIZE 100

int main() {
	char str[SIZE], replacement_char;
	printf("Input a string: ");
	fgets(str, SIZE, stdin);
	printf("Input replacement character: ");
	scanf("%c", &replacement_char);

	int i = 0;
	while(str[i] != '\0') {
		if(str[i] == ' ') {
			str[i] = replacement_char;
		}
		i++;
	}

	printf("After replacing the space with %c the new string is:\n%s", replacement_char, str);

	return 0;
}