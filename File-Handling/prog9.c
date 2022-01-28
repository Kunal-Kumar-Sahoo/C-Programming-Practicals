// Write a program in C to replace a specific line with another text in a file

#include <stdio.h>
#include <string.h>

int main() {
    printf("Input the file name to be opened: ");
    char path[100]; fgets(path, 100, stdin); path[strlen(path)-1] = '\0';
    printf("Input the content of the new line: ");
    char text[100]; fgets(text, 100, stdin); text[strlen(text)-1] = '\0';
    printf("Input the line number you want to replace: ");
    int n; scanf("%d", &n);
    FILE *fptr = fopen(path, "r");
    char content[100][100];
    int i = 0, total;
    while(fgets(content[i], 100, fptr)) {
        content[i][strlen(content[i])-1] = '\0';
        i++;
    }
    total = i;
    fclose(fptr);

    fptr= fopen(path, "w");
    for(i = 0; i <= total; i++) {
        if(i == n-1) {
            fprintf(fptr, "%s\n", text);
        }
        else {
            fprintf(fptr, "%s\n", content[i]);
        }
    }
    fclose(fptr);

    printf("Line replaced successfully\n");

    return 0;
}
