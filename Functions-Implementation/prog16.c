// Write a C program to check whether a number is palindrome or not using recursion.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int reverse(int num) {
    int digits = log10(num);
    if(num == 0)
        return 0;
    return (num % 10) * pow(10, digits) + reverse(num/10);
}

bool isPalindrome(int num) {
    return num == reverse(num);
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);

    if(isPalindrome(n))
        printf("%d is a palindrome\n", n);
    else 
        printf("%d is not a palindrome\n", n);

    return 0;
}
