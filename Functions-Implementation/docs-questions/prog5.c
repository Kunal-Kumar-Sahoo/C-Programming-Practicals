// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function. 

#include <stdio.h>

long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n-1);
}

long sum(int n) {
    if(n == 1)
        return 1;
    return factorial(n-1) + sum(n-1);
}

int main() {
    printf("Enter number of terms: ");
    int n; scanf("%d", &n);
    printf("Sum of first %d terms of the series: %ld\n", n, sum(n));

    return 0;
}
