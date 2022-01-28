// Write a program in C to copy a file in another name.

#include <stdio.h>

int main() {
    printf("Input source file name: ");
    char path1[100]; scanf("%s", path1);
    FILE *sourceptr = fopen(path1, "r");

    printf("Input target file name: ");
    char path2[100]; scanf("%s", path2);
    FILE *targetptr = fopen(path2, "w");
    
    char c;
    while((c = fgetc(sourceptr)) != EOF) {
        fputc(c, targetptr);
    }
    fclose(sourceptr); fclose(targetptr);
    printf("Content copied successfuly\n");

    return 0;
}
