// C Program to find sum of first N natural number, N must be taken by the user.

#include <stdio.h>

int main() {
    printf("Enter upper limit: ");
    int n; scanf("%d", &n);
    long sum = 0;

    while (n > 0) {
        sum += n;
        n--;
    }
    printf("%ld\n", sum);

    return 0;
}