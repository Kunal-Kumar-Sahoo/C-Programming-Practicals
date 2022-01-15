// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to convert a string to lowercase. 

#include <stdio.h>

#define SIZE 100

int main() {
    char string[SIZE];
    printf("Input a string in UPPERCASE: ");
    scanf("%[^\n]%c", string);

    int i = 0;
    while(string[i] != '\0') {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += ('a' - 'A');
        }
        i++;
    }
    printf("Here is the above string in lowercase:\n%s\n", string);

    return 0;
}