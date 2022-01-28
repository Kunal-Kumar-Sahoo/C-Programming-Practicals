// Write a program in C to create and store information in a text file. 

#include <stdio.h>

int main() {
    char text[100] = "A quick brown fox jumps over the lazy dog.";

    char path[] = "/home/kunalkumarsahoo/Programming/C-Programming/C-Programming-Practicals/File-Handling/test1.txt";
    FILE *fileptr = fopen(path, "w");
    fprintf(fileptr, "%s", text);
    fclose(fileptr);
    printf("Content written to file successfully\n");

    return 0;
}
