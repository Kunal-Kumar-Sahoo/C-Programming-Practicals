// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to find the number of times a given word 'the' appears in the given string. 

#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int main() {
    int length = 0, i, frequency = 0;
    bool t, h, e, space;
    char str[SIZE];
    printf("Enter a string: ");
    fgets(str, SIZE, stdin);

    while(str[length++] != '\0'); length -= 2;

    for (i = 0; i < length-3; i++) {
        t =(str[i] == 't' || str[i] == 'T');
        h =(str[i + 1] == 'h' || str[i + 1] == 'H');
        e =(str[i + 2] == 'e'|| str[i + 2] == 'E');
        space =(str[i + 3] == ' ' || str[i + 3] == '\0');

        if(t && h && e && space) {
            frequency++;
        }
    }

    printf("Frequency of the word 'the' is %d\n", frequency);

    return 0;
}