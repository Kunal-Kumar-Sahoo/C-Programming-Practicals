// Write a C program to display all array elements using recursion.

#include <stdio.h>

void printArray(int *arr, int n) {
    static int i = 0;
    if(i == n) {
        printf("\n");
        return;
    }
    printf("%d ", *(arr+(i++)));
    printArray(arr, n);
}

int main() {
    printf("Input the size of the array: ");
    int n; scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for the array:\n", n);
    for(int i = 0; i < n; i++) 
        scanf("%d", arr+i);

    printf("Given array is: \n");
    printArray(arr, n);

    return 0;
}
