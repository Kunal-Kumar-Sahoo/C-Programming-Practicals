// Write a C program to check whether a number is even or odd using functions.

#include <stdio.h>

int checkOddEven(int n) {
    return n % 2;
}

void classifyOddEven(int n) {
    switch(checkOddEven(n)) {
        case 1:
            printf("%d is Odd\n", n);
            break;
        case 0:
            printf("%d is Even\n", n);
            break;
    }
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    classifyOddEven(n);

    return 0;
}
