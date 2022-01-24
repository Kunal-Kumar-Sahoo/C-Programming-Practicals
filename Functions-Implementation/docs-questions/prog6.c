// Write a program in C to convert decimal number to binary number using the function. 

#include <stdio.h>

long dec2bin(int dec) {
    if(dec == 0)
        return 0;
    return dec % 2 + 10 * dec2bin(dec / 2);
}

int main() {
    printf("Enter a number in decimal form: ");
    int n; scanf("%d", &n);
    printf("Binary form of %d: %ld\n", n, dec2bin(n));

    return 0;
}
