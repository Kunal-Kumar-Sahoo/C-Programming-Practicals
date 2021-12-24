// C program to print all prime numbers from 1 to N.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);

    int i = 2;
    while (i <= n) {
        bool isPrime = true;
        for (int j = 2; j <= pow((double)i, 0.5); j++) 
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        if (isPrime) 
            printf("%d\n", i);
        i++;
    }

    return 0;
}