// C program to print all even and odd numbers from 1 to N.

#include <stdio.h>

int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);

    printf("Odd numbers between 1 to %d:\n", n);
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }

    printf("\nEven numbers between 1 to %d:\n", n);
    for (i = 2; i <= n; i += 2)
        printf("%d ", i); 

    printf("\n");
    return 0;
}