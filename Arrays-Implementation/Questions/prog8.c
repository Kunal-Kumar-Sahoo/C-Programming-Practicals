// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to count the frequency of each element of an array. 

#include <stdio.h>

int main() {
    printf("Input the number of elements to be stored in the array: ");
    int n; scanf("%d", &n);

    int arr[n], freq[n], i, j, c;

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The frequency of all elements of an array:\n");
    for(i = 0; i < n; i++) {
        c = 1;
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                c++;
                freq[j] = -1;
            }
        }
        if(freq[i] != -1) {
            printf("%d occurs %d times\n", arr[i], c);
        }
    }
    


    return 0;
}