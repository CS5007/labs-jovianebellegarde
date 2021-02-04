// Joviane Bellegarde 2/4/21
//
//
#include <stdio.h>

int main() {

	FILE* filePointer;

	filePointer = fopen("alphabet.txt", "r");

	char buffer; 

	while(1 == fscanf(filePointer, "%c", &buffer)) {
		if (buffer == 'b') {
			printf("The character 'b' is the second letter in the alphabet.\n");
		}

	}
	fclose(filePointer);

	return 0;

}
