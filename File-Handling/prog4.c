// Write a program in C to read the file and store the lines into an array

#include <stdio.h>
#include <string.h>

int main() {
    printf("Input the file to be opened: ");
    char path[100], c; scanf("%s", path);
    FILE *fptr = fopen(path, "r");
    char content[100][100];

    int i = 0, total = 0;
    while(fgets(content[i], 100, fptr)) {
        content[i][strlen(content[i])-1] = '\0';
        i++;
    }
    fclose(fptr);
    total = i;
    printf("The content of the file is:\n");
    for(i = 0; i < total; i++) {
        printf("%s\n", content[i]);
    }

    return 0;
}
