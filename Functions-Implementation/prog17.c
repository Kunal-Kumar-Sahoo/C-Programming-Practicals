// Write a C program to find sum of digits of a given number using recursion.

#include <stdio.h>

int sumOfDigits(int num) {
    if(num / 10 == 0)
        return num;
    return num % 10 + sumOfDigits(num / 10);
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);

    printf("Sum of digits of %d: %d\n", n, sumOfDigits(n));

    return 0;
}
