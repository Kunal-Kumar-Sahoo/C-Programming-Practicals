// C Program to find factorial of a number.

#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    if (n >= 0) {
        long factorial = 1;
        for (int i = 2; i <= n; i++)
            factorial *= i;
        printf("%d! = %ld\n", n, factorial);
    } else
        printf("Factorial of negative numbers don't exist!\n");

    return 0;
}