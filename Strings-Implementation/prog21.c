// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to convert a string to uppercase. 

#include <stdio.h>

#define SIZE 100

int main() {
    char string[SIZE];
    printf("Input a string in lowercase: ");
    scanf("%[^\n]%c", string);

    int i = 0;
    while(string[i] != '\0') {
        if(string[i] >= 'a' && string[i] <= 'z') {
            string[i] += ('A' - 'a');
        }
        i++;
    }
    printf("Here is the above string in UPPERCASE:\n%s\n", string);

    return 0;
}