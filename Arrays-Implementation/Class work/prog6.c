// C program to print frequencies of elements of an array.

#include <stdio.h>

int main() {
    printf("Enter size of the array: ");
    int n; scanf("%d", &n);

    int arr[n];
    int i;

    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int freq[n], j, visited = -1;
    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i+1; j < n; j++)
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = visited;
            }
        if(freq[i] != visited)
            freq[i] = count;
    }

    for(i = 0; i < n; i++)
        if(freq[i] != visited)
            printf("%d | %d\n", arr[i], freq[i]);

    return 0;
}
