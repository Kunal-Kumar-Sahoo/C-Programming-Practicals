// Write a C program to find factorial of any number using recursion.

#include <stdio.h>

long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n-1);
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    if(n < 0) 
        printf("Factorials of negative numbers don't exist\n");
    else
        printf("%d! = %ld\n", n, factorial(n));
    return 0;
}
