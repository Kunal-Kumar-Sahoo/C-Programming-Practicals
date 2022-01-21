// Write a C program to print all even or odd numbers in given range using recursion.

#include <stdio.h>

void printOddEvenNumbers(int lower, int upper) {
    if(lower > upper) {
        printf("\n");
        return;
    }
    printf("%d ", lower);
    printOddEvenNumbers(lower+2, upper);
} 

int main() {
    printf("Enter lower limit: ");
    int l; scanf("%d", &l);

    printf("Enter upper limit: ");
    int u; scanf("%d", &u);

    if(l % 2) {
        printf("Even numbers are:\n");
        printOddEvenNumbers(l+1, u);
        printf("Odd numbers are:\n");
        printOddEvenNumbers(l, u);
    }
    else {
        printf("Even numbers are:\n");
        printOddEvenNumbers(l, u);
        printf("Odd numbers are:\n");
        printOddEvenNumbers(l+1, u);
    }

    return 0;
}
