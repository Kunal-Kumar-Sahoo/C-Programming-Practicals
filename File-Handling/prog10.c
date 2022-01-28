// Write a program in C to append multiple lines at the end of a text file.

#include <stdio.h>
#include <string.h>

int main() {
    printf("Input the file name to be opened: ");
    char path[100]; fgets(path, 100, stdin); path[strlen(path)-1] = '\0';
    printf("Input the number of lines to be written: ");
    int n, i; scanf("%d", &n);

    char text[n][100];
    printf("Input %d lines:\n", n);
    for(i = 0; i <= n; i++) {
        fgets(text[i], 100, stdin);
        text[i][strcspn(text[i], "\n")] = 0;
    }

    FILE *fptr = fopen(path, "a");
    for(i = 1; i <= n; i++) {
        fprintf(fptr, "%s\n", text[i]);
    }
    fclose(fptr);

    printf("Lines appended successfully\n");

    return 0;
}
