// Write a program in C to read an existing file

#include <stdio.h>

int main() {
    char path[] = "test1.txt";
    FILE *fptr = fopen(path, "r");
    char c;
    printf("Contents of the file are:\n");
    while((c = fgetc(fptr)) != EOF) {
        printf("%c", c);
    }
    fclose(fptr);
    printf("\n");

    return 0;
}
