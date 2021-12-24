// C program to print all lowercase alphabets using while loop.

#include <stdio.h>

int main() {
    int i = 0;
    while (i < 26) {
        printf("%c", 'a'+i);
        i++;
    }

    return 0;
}