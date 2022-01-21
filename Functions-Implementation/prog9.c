// Write a C program to print all perfect numbers between given interval using functions.

#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int n) {
    int sum = 1;
    for(int i = 2; i < n; i++) 
        if(n % i == 0)
            sum += i;
    return sum == n;
}

void printPerfectNumbers(int start, int end) {
    for(int i = start; i <= end; i++) 
        if(isPerfect(i))
            printf("%d ", i);
    printf("\n");
}

int main() {
    printf("Enter lower limit: ");
    int a; scanf("%d", &a);

    printf("Enter upper limit: ");
    int b; scanf("%d", &b);

    printPerfectNumbers(a, b);

    return 0;
}
