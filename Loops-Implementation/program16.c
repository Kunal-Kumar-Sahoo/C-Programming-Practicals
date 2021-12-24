// C program to print all leap years from 1 to N.

#include <stdio.h>

int main() {
    printf("Enter a year: ");
    int n; scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0) && (i % 100 != 0))
            printf("%d\n", i);
        else if (i % 400 == 0)
            printf("%d\n", i);          
    }

    return 0;
}