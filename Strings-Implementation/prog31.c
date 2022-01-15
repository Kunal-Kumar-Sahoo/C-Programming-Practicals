// Author: Kunal Kumar Sahoo
// Objective: Write a C program to count of each character in a given string. 

#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int main() {
	char str[SIZE], chars[SIZE]; 

	printf("Input a string: ");
	scanf("%[^\n]%c", str);

	int i, j, k, freq[SIZE];
	bool flag;

	chars[0] = str[0];
	freq[0] = 1;
	j = 0;
	for(i = 1; str[i] != '\0'; i++) {
		for(k = 0; k <= j; k++) {
			if(chars[k] == str[i]) {
				freq[k]++;
				flag = true;
				break;
			}
		}
		if(k > j) {
			flag = false;
		}

		if(!flag) {
			j++;
			chars[j] = str[i];
			freq[j] = 1;
		}

	}
	printf("The count of each character in the string %s is\n", str);
	for(i = 0; i <= j; i++) {
		printf("%c\t%d\n", chars[i], freq[i]);
	}

	return 0;
}