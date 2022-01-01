// C program to print all Armstrong numbers from 1 to N.

#include <stdio.h>
#include <math.h>


int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        int j = i, digits = 0;
        do {
            digits++;
            j /= 10;
        } while(j > 0);
        int sum = 0;
        for (j = i; j > 0; j /= 10)
            sum += pow((double)(j % 10), digits);
        if (sum == i) printf("%d ", i);
        i++;
    } printf("\n");

    return 0;
}