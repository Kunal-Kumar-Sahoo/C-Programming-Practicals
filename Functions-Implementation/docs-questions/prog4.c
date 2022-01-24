// Write a program in C to check a given number is even or odd using the function. 

#include <stdio.h>

int isOdd(int n) {
    return n % 2; 
} 

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);

    if(isOdd(n)) printf("%d is Odd\n", n);
    else printf("%d is Even\n", n);

    return 0;
}
