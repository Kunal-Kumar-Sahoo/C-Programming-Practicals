// Write a program in C to check whether two given strings are an anagram.  

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void sort(char str[], int n) {
    for(int i = 0; i < n; i++)
        for(int j = 1; j < n-i; j++) 
            if(str[j-1] > str[j])
                swap(str+j-1, str+j);
}

int compare(char str1[], char str2[]) {
    sort(str1, strlen(str1)); 
    sort(str2, strlen(str2));
    return strcmp(str1, str2);
}

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE], temp1[MAX_SIZE], temp2[MAX_SIZE];
    printf("Input the first string: ");
    scanf("%s", str1);
    printf("Input the second string: ");
    scanf("%s", str2);

    strcpy(temp1, str1); strcpy(temp2, str2);

    if(compare(str1, str2) == 0)
        printf("%s and %s are anagrams\n", temp1, temp2);
    else
        printf("%s and %s are not anagrams\n", temp1, temp2);

    return 0;
}
