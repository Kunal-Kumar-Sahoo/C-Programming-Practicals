// C program to read an integer and print its multiplication table.

#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    int i = 1;

    // While loop implementation:
    printf("While-loop implementation.\n");
    while (i <= 10) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

    // For loop implementation:
    printf("\nFor-loop implementation.\n");
    for (i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", n, i, n*i);

    // Do-while loop implementation
    printf("\nDo-while-loop implementation.\n");
    i = 1;
    do {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    } while(i <= 10);

    return 0;
}