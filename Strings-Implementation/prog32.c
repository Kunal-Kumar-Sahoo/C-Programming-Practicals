// Author: Kunal Kumar Sahoo
// Objective: Write a C programming to convert vowels into upper case character in a given string. 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input a string: ");
	char str[SIZE]; scanf("%[^\n]%c", str);

	int i = 0;
	while(str[i]) {
		switch(str[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				str[i] += ('A'-'a');
		}
		i++;
	}

	printf("After converting vowels into upper case the sentence becomes:\n%s\n", str);

	return 0;
}
