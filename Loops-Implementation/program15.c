// C program to print square, cube and square root of all numbers from 1 to N.

#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);

    printf("Squares of numbers:\n");
    int i = 1;
    while (i <= n) {
        printf("%ld\n", (long)pow(i, 2));
        i++;
    }

    printf("\nCubes of numbers:\n");
    for (i = 1; i <= n; i++)
        printf("%ld\n", (long)pow(i, 3));

    printf("\nSquare roots of numbers:\n");
    i = 1;
    do {
        printf("%lf\n", pow(i, 0.5));
        i++;
    } while(i <= n);

    return 0;
}