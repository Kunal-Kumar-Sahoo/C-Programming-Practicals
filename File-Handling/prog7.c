// Write a program in C to count a number of words and characters in a file

#include <stdio.h>

int main() {
    printf("Input the file name to be opened: ");
    char path[100], c; scanf("%s", path);

    FILE *fptr = fopen(path, "r");
    int chars = 0, words = 0;
    while((c = fgetc(fptr)) != EOF) {
        if(c == ' ' || c == '\n') words++;
        else chars++;
    }
    words++; //The word just before EOF gets missed.
    fclose(fptr);

    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", chars);

    return 0;
}
