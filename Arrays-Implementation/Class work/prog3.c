// Search an element in the array.

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter size of the array: ");
    int n; scanf("%d", &n);

    int arr[n], i;

    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target element: ");
    int t; scanf("%d", &t);
    bool found = false;
    for(i = 0; i < n; i++) {
        if(arr[i] == t) {
            printf("%d found at index %d.\n", t, i);
            found = true;
        }
    }

    if (!found) 
        printf("%d not found in the array.\n", t);
    
    return 0;
}
