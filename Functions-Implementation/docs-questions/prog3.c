// Write a program in C to swap two numbers using function. 

#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    printf("Enter two numbers: ");
    int a, b; scanf("%d %d", &a, &b);

    printf("Original values:\n");
    printf("First number: %d\nSecond number: %d\n", a, b);

    swap(&a, &b);
    printf("After swapping values:\n");
    printf("First number: %d\nSecond number: %d\n", a, b);

    return 0;
}
