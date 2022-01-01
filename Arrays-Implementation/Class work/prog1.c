// Create an array, read input from user and print it.

#include <stdio.h>

int main() {
    printf("Enter size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;
    
    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Elements of array are:\n{");
    for (i = 0; i < n; i++) {
        if (i == n-1)
            printf("%d}\n", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
    
    return 0;
}
