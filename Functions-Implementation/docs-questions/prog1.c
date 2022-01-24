// Write a program in C to show the simple structure of a function.

#include <stdio.h>

int add(int, int);

int main() {
    printf("Enter two numbers: ");
    int a, b; scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}
