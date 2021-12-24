// C Program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit.

#include <stdio.h>

int main() {
    char choice = 'n';
    do {
        printf("Enter a number: ");
        int n; scanf("%d", &n);
        if (n > 0) printf("POSITIVE\n");
        else if (n == 0) printf("ZERO\n");
        else printf("NEGATIVE\n");

        printf("Do you want to quit? (y/n): ");
        scanf("%s", &choice);
    } while(choice == 'n');
    return 0;
}