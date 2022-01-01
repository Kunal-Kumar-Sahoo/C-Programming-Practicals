// C program to sort an array

#include <stdio.h>

int main() {
    printf("Enter size of the array: ");
    int n; scanf("%d", &n);

    printf("Enter elements of the array:\n");
    int arr[n], i, j;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Original array:\n{");
    for(i = 0; i < n; i++) {
        if(i == n-1)
            printf("%d}\n", arr[i]);
        else
            printf("%d, ", arr[i]);
    }

    for(i = 0; i < n-1; i++) {
        for(j = i+1; i >= 0; j--) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            } else break;
        }
    }

    printf("Sorted array:\n{");
    for(i = 0; i < n; i++) {
        if(i == n-1)
            printf("%d}\n", arr[i]);
        else
            printf("%d, ", arr[i]);
    }

    return 0;
}
