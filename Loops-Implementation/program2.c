// C program to print EVEN numbers from 1 to N using while loop.

#include <stdio.h>

int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);

    int i = 2;
    while (i <= n) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}