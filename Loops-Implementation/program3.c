// C program to print all uppercase alphabets using while loop.

#include <stdio.h>

int main() {
    int i = 0;
    while (i < 26) {
        printf("%c\n", 'A'+i);
        i++;
    }

    return 0;
}