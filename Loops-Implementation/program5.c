// C program to print numbers from 1 to N using while loop.

#include <stdio.h>

int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d", i);
        i++;
    }

    return 0;
}