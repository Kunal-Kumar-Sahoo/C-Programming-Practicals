// Write a program in C to merge two files and write it in a new file.

#include <stdio.h>

int main() {
    printf("Input first file: ");
    char path1[100]; scanf("%s", path1);
    FILE *fptr1 = fopen(path1, "r");

    printf("Input second file: ");
    char path2[100]; scanf("%s", path2);
    FILE *fptr2 = fopen(path2, "r");

    printf("Input the name for the merged file: ");
    char path3[100]; scanf("%s", path3);
    FILE *fptr3 = fopen(path3, "w");

    char c;
    while((c = fgetc(fptr1)) != EOF) {
        fputc(c, fptr3);
    }
    fputc('\n', fptr3);
    fclose(fptr1);
    
    while((c = fgetc(fptr2)) != EOF) {
        fputc(c, fptr3);
    }
    fclose(fptr2);
    printf("Succesfully merged two files into another file\n");

    return 0;
}
