// C program to print all Armstrong numbers from 1 to N.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        int sum = 0;
        for (int j = i; j > 0; j /= 10)
            sum += pow((double)(j % 10), 3.0);
        if (sum == i) printf("%d\n", i);
        i++;
    }

    return 0;
}