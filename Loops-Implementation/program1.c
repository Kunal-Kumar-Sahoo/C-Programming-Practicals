// C program to print ODD numbers from 1 to N using while loop.

#include <stdio.h>

int main() {
    printf("Enter a upper limit: ");
    int n; scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}