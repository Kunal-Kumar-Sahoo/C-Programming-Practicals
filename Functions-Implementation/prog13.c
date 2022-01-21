// Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include <stdio.h>

long sum(int n) {
    if(n == 1)
        return 1;
    return n + sum(n-1);
}

int main() {
    printf("Enter number of natural numbers to be considered for sum: ");
    int n; scanf("%d", &n);
    printf("Sum of %d natural numbers: %ld\n", n, sum(n));
    return 0;
}
