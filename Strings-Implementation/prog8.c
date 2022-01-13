// 8. Write a program in C to copy one string to another string. 
// Test Data :
// Input the string : This is a string to be copied.
// Expected Output :
// The First string is : This is a string to be copied.
// The Second string is : This is a string to be copied. 
// Number of characters copied : 31 

#include <stdio.h>

#define SIZE 100

int main() {
	printf("Input the string: ");
	char str[SIZE], str_copy[SIZE]; scanf("%[^\n]%c", str);

	int i = 0;
	while(str[i] != '\0') {
		str_copy[i] = str[i];
		i++;
	}

	printf("The First string is: %s\n", str);
	printf("The Second string is: %s\n", str_copy);
	printf("The numbers of characters copied: %d\n", i);

	return 0;
}