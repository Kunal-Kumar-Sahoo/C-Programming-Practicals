// Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) 
        if(n % i == 0)
            return false;
    return true;
}

bool checkArmstrong(int n) {
    int digits = log10(n)+1;
    int sum = 0;
    for(int temp = n; temp > 0; temp /= 10) 
        sum += pow(temp % 10, digits);

    return n == sum;
}

bool checkPerfect(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++) 
        if(n % i == 0) 
            sum += i;
    return sum == n;
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    
    if(checkPrime(n))
        printf("%d is prime\n", n);
    else 
        printf("%d is composite\n", n);
    if(checkArmstrong(n))
        printf("%d is an Armstrong number\n", n);
    else 
        printf("%d is not an Armstrong number\n", n);
    if(checkPerfect(n))
        printf("%d is a Perfect number\n", n);
    else 
        printf("%d is not a Perfect number\n", n);

    return 0;
}
