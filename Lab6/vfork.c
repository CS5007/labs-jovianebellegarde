// Joviane Bellegarde
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

char colors[64][64 * 3];

// Modify your paint function here
void paint(int workID) {
	printf("Artist %d is painting\n", workID);
}

void save() {
	FILE *filePointer;
	filePointer = fopen("vfork.ppm", "w+");
	fputs("P3\n", filePointer);
	fputs("64 64\n", filePointer);
	fputs("255\n", filePointer);
	for(int i = 0; i < 64; i++){
		for(int j = 0; j < 64 * 3; j++){
			fprintf(filePointer, "%d", colors[i][j]);
			fputs(" ", filePointer);		
		}
		fputs("\n",filePointer);
	}
	fclose(filePointer);
}

int main(int argc, char** argv) {
	
	// malloc an integer array of 8000
	int* integers = malloc(sizeof(int)* 8000);	

	int numberOfArtists = 64; // How many child processes do we want?

	pid_t pid;
	// main loop where we fork new threads
	for(int i = 1; i <= numberOfArtists; i++) {
		// (1) Perform a fork
		pid = vfork();

		// (2) Make only the child do some work (i.e pain) and then terminate.
		if (pid == 0) {
			// Child is calling paint
			paint(i);

			// Exiting child
			exit(0);
		}
	}
	// Going to have the parent wait
        pid_t wpid;
        int status = 0;
        while ((wpid = wait(&status)) > 0);
	printf("parent is exiting (last artist out!)\n");

	save();

	free(integers);	
	return 0;
}

