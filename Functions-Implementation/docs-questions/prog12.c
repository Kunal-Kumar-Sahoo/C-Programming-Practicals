// Write a C programming to find out maximum and minimum of some values using function which will return an array. 

#include <stdio.h>
#include <stdlib.h>

int *extremes(int arr[], int n) {
    int *ans = malloc(2 * sizeof(int));
    ans[0] = arr[0], ans[1] = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > ans[0])
            ans[0] = arr[i];
        if(arr[i] < ans[1])
            ans[1] = arr[i];
    }

    return ans;
}

int main() {
    printf("How many numbers you want to compare? ");
    int n; scanf("%d", &n); int arr[n];

    printf("Input %d values:\n", n);
    for(int i = 0; i < n; i++) 
        scanf("%d", arr+i);
    int *ans = extremes(arr, n);
    printf("Minimum value: %d\n", *(ans+1));
    printf("Maximum value: %d\n", *ans);

    free(ans);

    return 0;
}
