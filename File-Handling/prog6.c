// Write a program in C to find the content of the file and number of lines in a Text File.

#include <stdio.h>
#include <string.h>

int main() {
    printf("Input the file to be opened: ");
    char path[100], c; scanf("%s", path);
    FILE *fptr = fopen(path, "r");
    char content[100][100];

    int i = 0;
    while(fgets(content[i], 100, fptr)) {
        //content[i][strlen(content[i])-1] = '\0';
        printf("%s", content[i]);
        i++;
    }
    fclose(fptr);
    printf("Number of lines in the file: %d\n", i);

    return 0;
}
