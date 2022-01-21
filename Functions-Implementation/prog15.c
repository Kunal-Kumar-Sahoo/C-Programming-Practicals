// Write a C program to find reverse of any number using recursion.

#include <stdio.h>
#include <math.h>

int reverse(int num) {
    int digits = log10(num);
    if(num == 0)
        return 0;
    return (num % 10) * pow(10, digits) + reverse(num/10);
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    printf("Reverse of %d: %d\n", n, reverse(n));

    return 0;
}
