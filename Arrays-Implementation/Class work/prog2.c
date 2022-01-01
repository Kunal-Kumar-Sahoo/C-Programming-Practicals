// Find minimum and maximum number in an array

#include <stdio.h>

int main() {
    printf("Enter size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;

    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], min = arr[0];

    for(i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Least number: %d\nLargest number: %d\n", min, max);

    return 0;
}
