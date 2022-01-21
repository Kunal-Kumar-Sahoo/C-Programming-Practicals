// Write a C program to print all Armstrong numbers between given interval using functions.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int countDigits(int n) {
    return log10(n) + 1;
}

bool isArmstrong(int n) {
    int sum = 0;
    int digits = countDigits(n);
    for(int temp = n; temp > 0; temp /= 10)
        sum += pow(temp % 10, digits);
    return sum == n;
}

void printArmstrong(int lower, int upper) {
    for(int i = lower; i <= upper; i++) 
        if(isArmstrong(i))
            printf("%d ", i);
    printf("\n");
}

int main() {
    printf("Enter lower limit: ");
    int n1; scanf("%d", &n1);
    printf("Enter upper limit: ");
    int n2; scanf("%d", &n2);

    printArmstrong(n1, n2);

    return 0;
}
