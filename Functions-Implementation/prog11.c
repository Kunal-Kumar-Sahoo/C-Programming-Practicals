// Write a C program to print all natural numbers between 1 to n using recursion.

#include <stdio.h>

void printNaturalNumbers(int n) {
    static int i = 1;
    if(i > n)
        return;
    printf("%d ", i++);
    printNaturalNumbers(n);
}

int main() {
    printf("Enter how many natural numbers you want to print: ");
    int n; scanf("%d", &n);

    printNaturalNumbers(n);
    printf("\n");

    return 0;
}
