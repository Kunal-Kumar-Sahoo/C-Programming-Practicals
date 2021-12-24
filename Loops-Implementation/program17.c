// C program to print all upper case and lower case alphabets.

#include <stdio.h>

int main() {
    int i = 0;
    printf("Uppercase alphabets:\n");
    while (i < 26) {
        printf("%c ", 'A'+i);
        i++;
    }

    printf("\nLowercase alphabets:\n");
    for (i = 0; i < 26; i++)
        printf("%c ", 'a'+i);
    printf("\n");

    return 0;
}