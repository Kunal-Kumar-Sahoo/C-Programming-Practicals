// Write a program in C to check armstrong and perfect numbers using the function. 

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int num) {
    int digits = log10(num) + 1;
    int sum = 0;
    for(int temp = num; temp > 0; temp /= 10) 
        sum += (int)pow(temp % 10, digits);
    return sum == num;
}

bool isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++)
        if(num % i == 0)
            sum += i;
    return sum == num;
}

int main() {
    printf("Enter a number: ");
    int n; scanf("%d", &n);

    if(isArmstrong(n))
        printf("%d is an armstrong number\n", n);
    else
        printf("%d is not an armstrong number\n", n);

    if(isPerfect(n))
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);

    return 0;
}
