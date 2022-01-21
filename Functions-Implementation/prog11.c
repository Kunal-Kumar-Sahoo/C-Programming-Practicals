// Write a C program to print all natural numbers between 1 to n using recursion.

#include <stdio.h>

void printNaturalNumbers(int n, int i) {
    if(i > n)
        return;
    printf("%d ", i);
    printNaturalNumbers(n, i+1);
}

int main() {
    printf("Enter how many natural numbers you want to print: ");
    int n; scanf("%d", &n);

    printNaturalNumbers(n, 1);
    printf("\n");

    return 0;
}
