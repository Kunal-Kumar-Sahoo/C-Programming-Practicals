// Write a C program to print all strong numbers between given interval using functions.

#include <stdio.h>
#include <stdbool.h>

int factorial(int n) {
    int product = 1;
    while(n >= 2) {
        product *= n--;
    }
    return product;
}

bool isStrongNumber(int n) {
    int sum = 0;
    for(int i = n; i > 0; i /= 10)
        sum += factorial(i % 10);
        
    return sum == n;
}

void printStrongNumbers(int lower, int upper) {
    for(int i = lower; i <= upper; i++)
        if(isStrongNumber(i))
            printf("%d ", i);
    printf("\n");
}

int main() {
    printf("Enter lower limit: ");
    int a; scanf("%d", &a);

    printf("Enter upper limit: ");
    int b; scanf("%d", &b);

    printStrongNumbers(a, b);

    return 0;
}
