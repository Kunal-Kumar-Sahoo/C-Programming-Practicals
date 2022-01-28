// Write a program in C to write multiple lines in a text file

#include <stdio.h>
#include <string.h>

int main() {
    printf("Input the number of lines to be written: ");
    int i, n; scanf("%d", &n);
    char str[100], path[] = "test1.txt";
    FILE *fptr = fopen(path, "w");

    printf("Input %d lines:\n", n);
    for(i = 0; i <= n; i++) {
        fgets(str, 100, stdin);
        if(*str != '\n') { 
            str[strcspn(str, "\n")] = 0;
            str[strlen(str)] = '\n';
            fputs(str, fptr);        
        }
    }
    fclose(fptr);

    printf("%d lines written in the file successfully\n", n);

    return 0;
}
