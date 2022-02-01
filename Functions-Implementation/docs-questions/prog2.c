// Write a program in C to find the square of any number using the function. 

#include <stdio.h>

long square(int n) {
    return n * n;
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    printf("%d ^ 2 = %ld\n", n, square(n));

    return 0;
}
