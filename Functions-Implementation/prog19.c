// Write a C program to generate nth Fibonacci term using recursion.

#include <stdio.h>

typedef unsigned int uint;

uint fibonacci(uint n) {
    if(n <= 2)
        return n-1;
    return fibonacci(n-2) + fibonacci(n-1);
}

int main() {
    printf("Enter which term of the series you want to print: ");
    uint n; scanf("%d", &n);
    printf("Fibonacci term at position %d: %d\n", n, fibonacci(n));

    return 0;
}
