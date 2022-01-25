// Write a program in C to check whether a number is a prime number or not using the function.

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    for(int i = 2; i < n; i++) 
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    if(isPrime(n))
        printf("%d is a Prime number\n", n);
    else
        printf("%d is a Composite number\n", n);
    
    return 0;
}
