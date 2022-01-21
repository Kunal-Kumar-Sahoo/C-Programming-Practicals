// Write a C program to find maximum and minimum between two numbers using functions.

#include <stdio.h>
#include <stdlib.h>

int* max_min(int num1, int num2) {
    int* arr = (int*)malloc(2 * sizeof(int));
    if(num1 > num2) {
        arr[0] = num1;
        arr[1] = num2;
    }
    else {
        arr[0] = num2;
        arr[1] = num1;
    }

    return arr;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int* ans = max_min(a, b);

    printf("Maximum number: %d\n", *ans);
    printf("Minimum number: %d\n", *(ans+1));

    free(ans);

    return 0;
}
