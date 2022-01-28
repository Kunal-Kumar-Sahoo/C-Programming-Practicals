// Write a program in C to delete a specific line from a file.

#include <stdio.h>
#include <string.h>

int main() {
    printf("Input the file name to be opened: ");
    char path[100]; scanf("%s", path);
    printf("Input the line number you want to remove: ");
    int n; scanf("%d", &n);

    FILE *fptr = fopen(path, "r");
    char content[100][100];
    int i = 0, total = 0;
    while(fgets(content[i], 100, fptr)) {
        content[i][strlen(content[i])-1] = '\0';
        i++;
    }
    total = i;
    fclose(fptr);

    fptr = fopen(path, "w");
    for(int i = 0; i < total; i++) {
        if(i != n-1) {
            fprintf(fptr, "%s\n", content[i]);
        }
    }
    fclose(fptr);

    printf("Line deleted successfully\n");

    return 0;
}
