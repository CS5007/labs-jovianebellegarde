// Joviane Bellegarde
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

// Modify your paint function here
void paint(int workID) {
	printf("Artist %d is painting\n", workID);
}

char colors[64][64 * 3]

int main(int argc, char** argv) {
	
	// malloc an integer array of 8000
	int* integers = malloc(sizeof(int)* 8000);	

	int numberOfArtists = 8; // How many child processes do we want?

	pid_t pid;
	// main loop where we fork new threads
	for(int i = 1; i <= numberOfArtists; i++) {
		// (1) Perform a fork
		pid = fork();

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

	free(integers);	
	return 0;
}

