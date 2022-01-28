// Write a program in C to remove a file from the disk

#include<stdio.h>

int main() {
    printf("Input the name of the file to be deleted: ");
    char path[100]; scanf("%s", path);
    
    int status = remove(path);
    
    if(status == 0){    
        printf("%s file deleted successfully.\n", path);
    }    
    else
    {    
        printf("Unable to delete the file\n");
    }
    
    return 0;
}
