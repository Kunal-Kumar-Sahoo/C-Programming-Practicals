// Write a program in C to print all perfect numbers in given range using the function.  

#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++)
        if(num % i == 0)
            sum += i;
    return num == sum;
}

void printPerfectNumbers(int lower, int upper) {
    while(lower <= upper) {
        if(isPerfect(lower))
            printf("%d ", lower);
        lower++;
    }
    printf("\n");
}

int main() {
    printf("Enter lower limit: ");
    int l; scanf("%d", &l);
    printf("Enter upper limit: ");
    int u; scanf("%d", &u);
    printPerfectNumbers(l, u);
}
