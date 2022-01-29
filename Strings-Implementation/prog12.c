// Author: Kunal Kumar Sahoo
// Objective: Write a program in C to read a strings through keyboard and sort the words.

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
	printf("Input number of strings: ");
	int N; scanf("%d", &N);

	char words[N][SIZE], temp[SIZE];

	int i, j;
	printf("Input %d strings:\n", N);
	for(i = 0; i <= N; i++) {
		fgets(words[i], sizeof(words), stdin);
        words[i][strlen(words[i])-1] = '\0';
    }

	for(i = 1; i <= N; i++) {
		for(j = 0; j <= N-i; j++) {
			if(strcmp(words[j], words[j+1]) > 0) {
				strcpy(temp, words[j]);
				strcpy(words[j], words[j+1]);
				strcpy(words[j+1], temp);
			}
		}
	}

	printf("The strings appear after sorting:\n");
	for(i = 0; i <= N; i++) {
		printf("%s\n", words[i]);
	}

	return 0;
}
