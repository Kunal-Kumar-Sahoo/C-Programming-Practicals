// Write a program in C to encrypt a text file.

#include <stdio.h>

int main() {
    printf("Input the name of the file to be encrypted: ");
    char path[100]; scanf("%s", path);

    FILE *fptr = fopen(path, "r");
    long length, i;
    fseek(fptr, 0, SEEK_END);
    length = ftell(fptr);
    fseek(fptr, 0, SEEK_SET);

    char text[length+1];
    fread(text, 1, length, fptr);
    text[length] = '\0'; 
    fclose(fptr);

    fptr = fopen(path, "w");
    for(i = 0; text[i] != '\0'; i++) {
        fputc(text[i] + 69, fptr);
    }
    fclose(fptr);
    printf("File encrypted successfully\n");

    return 0;
}
