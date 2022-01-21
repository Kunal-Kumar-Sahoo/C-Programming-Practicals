// Write a C program to find LCM of two numbers using recursion.

#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    printf("Enter two numbers: ");
    int x, y; scanf("%d %d", &x, &y);

    printf("LCM of %d and %d: %d\n", x, y, lcm(x, y));
    
    return 0;
}
