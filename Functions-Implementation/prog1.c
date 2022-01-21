// Write a C program to find cube of any number using function.

#include <stdio.h>

int cube(int);

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    printf("Cube of %d: %d\n", n, cube(n));

    return 0;
}

inline int cube(int a) {
    return a * a * a;
}
