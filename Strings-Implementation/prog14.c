// Author: Kunal Kumar Sahoo
// Objective: Write a C program to check whether a given substring is present in the given string. 

#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int main() {
	char str[SIZE], substr[SIZE];
	int len_str = 0, len_substr = 0, i, j;
	bool found;

	printf("Input the string: ");
	fgets(str, SIZE, stdin);
	printf("Input the substring to be searched: ");
	fgets(substr, SIZE, stdin);

	while(str[len_str++] != '\0'); len_str -= 2;
	while(substr[len_substr++] != '\0'); len_substr -= 2;

	for(i = 0; i <= len_str-len_substr; i++) {
		for(j = i; j < i+len_substr-1; j++) {
			found = true;
			if(str[j] != substr[j-i]) {
				found = false;
				break;
			}
		}
		if(found) break;
	}

	if(found) {
		printf("The substring exists in the string.\n");
	}
	else {
		printf("The substring does not exist in the string.\n");
	}

	return 0;
}
