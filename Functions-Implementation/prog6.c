// Write a C program to find all prime numbers between given interval using functions.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) 
        if(n % i == 0)
            return false;
    return true;
}

void printPrimes(int l, int u) {
    for(int i = l; i <= u; i++) 
        if(checkPrime(i))
            printf("%d ", i);
    printf("\n");
}

int main() {
    printf("Enter lower limit: ");
    int a; scanf("%d", &a);
    
    printf("Enter upper limit: ");
    int b; scanf("%d", &b);
    
    printPrimes(a, b);

    return 0;
}
