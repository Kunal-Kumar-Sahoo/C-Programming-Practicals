// Write a program in C to Find the Number of Lines in a Text File.

#include <stdio.h>

int main() {
    printf("Input the file name to be opened: ");
    char path[100], temp[100]; scanf("%s", path);
    FILE *fptr = fopen(path, "r");

    int lines = 0;
    while(fgets(temp, 100, fptr)) {
        lines++;
    }
    fclose(fptr);

    printf("Number of lines in the file: %d\n", lines);

    return 0;
}
