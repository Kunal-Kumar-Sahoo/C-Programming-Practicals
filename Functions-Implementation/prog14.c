// Write a C program to find sum of all even or odd numbers in given range using recursion.

#include <stdio.h>

int sumOfEvenOdd(int start, int end) {
    if(start > end)
        return 0;
    return start + sumOfEvenOdd(start + 2, end);
}

int main() {
    printf("Enter lower limit: ");
    int l; scanf("%d", &l);

    printf("Enter upper limit: ");
    int u; scanf("%d", &u);

    if(l % 2) {
        printf("Sum of all even numbers between %d and %d: %d\n", l, u, sumOfEvenOdd(l+1, u));
        printf("Sum of all odd numbers between %d and %d: %d\n", l, u, sumOfEvenOdd(l, u));
    }
    else {
        printf("Sum of all even numbers between %d and %d: %d\n", l, u, sumOfEvenOdd(l, u));
        printf("Sum of all odd numbers between %d and %d: %d\n", l, u, sumOfEvenOdd(l+1, u));
    }
    return 0;
}
