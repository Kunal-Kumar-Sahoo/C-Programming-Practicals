// Print unique elements of an array.

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter size of array: ");
    int n; scanf("%d", &n);

    int arr[n];
    int i, j, k;

    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Elements of the array are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if(arr[i] == arr[j]) {
                for(k = j; k < n-1; k++)
                    arr[k] = arr[k+1];
                n--;
                j--;
            }

    printf("Unique elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
