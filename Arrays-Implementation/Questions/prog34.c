// Author: Kunal Kumar Sahoo
// Objectiv: Write a program in C to find the number occurring odd number of times in an array. 
// All numbers occur even number of times except one number which occurs odd number of times.


#include <stdio.h>

int main() {
    printf("Enter size of the array: ");
    int n; scanf("%d", &n);

    if(n % 2) {
        int arr[n], freq[n], i, j, count;

        printf("Input %d elements in the array:\n", n);
        for(i = 0; i < n; i++) {
            freq[i] = 0;
            printf("element - %d : ", i);
            scanf("%d", &arr[i]);
        }

        for(i = 0; i < n; i++) {
            count  = 1;
            for(j = i+1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = -1;
                }
            }
            if(freq[i] != -1) {
                freq[i] = count;
                if(count % 2) {
                    printf("The element odd number of times is: %d\n", arr[i]);
                    break;
                }
            }
        }
    }

    else {
        printf("Either all elements have even frequencies or more than one numbers have odd frequencies\n");
    }

    return 0;
}