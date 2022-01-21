// Write a C program to find power of any number using recursion.

#include <stdio.h>

long calcPower(int base, int power) {
    if(power == 0)
        return 1;
    return base * calcPower(base, power-1);
}

int main() {
    printf("Enter base number: ");
    int n; scanf("%d", &n);

    printf("Enter power: ");
    int x; scanf("%d", &x);

    printf("%d^%d = %ld\n", n, x, calcPower(n, x));

    return 0;
}
