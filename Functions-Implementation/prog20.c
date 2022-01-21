// Write a C program to find GCD (HCF) of two numbers using recursion.

#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    printf("Enter two numbers: ");
    int x, y; scanf("%d %d", &x, &y);
    printf("GCD of %d and %d: %d\n", x, y, gcd(x, y));

    return 0;
}
