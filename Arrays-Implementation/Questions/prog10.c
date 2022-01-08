// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to separate odd and even integers in separate arrays. 

#include <stdio.h>

int main() {
    printf("Input the number of elements to be stored in the array: ");
    int n; scanf("%d", &n);

    int odd[n], even[n], i, j, k, inp;

    printf("Input %d elements in the array:\n", n);
    j = 0; k = 0;
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &inp);

        if(inp % 2) {
            odd[j] = inp;
            j++;
        }
        else {
            even[k] = inp;
            k++;
        }
    }

    printf("Even elements are:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements are:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}