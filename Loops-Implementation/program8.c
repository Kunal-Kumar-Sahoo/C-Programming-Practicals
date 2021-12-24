// C Program to print tables from numbers 1 to 20.

#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 20) {
        printf("\nMultiplication table of %d\n", i);
        for (int j = 1; j <= 10; j++)
            printf("%d * %d = %d\n", i, j, i*j);
        i++;
    }
    return 0;
}