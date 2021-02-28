// Joviane Bellegarde
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

// Modify your paint function here
void paint(...) {
	printf("Artist %d is painting\n", wordID);
}

int main(int argc, char** argv) {

	int numberOfArtists = 5; // How many child processes do we want?

	pid_t pid;
	// main loop where we fork new threads
	for(int i = 0; i < numberOfArtists; i++) {
		// (1) Perform a fork
		pid = 4;

		// (2) Make only the child do some work (i.e pain) and then terminate.
		if (pid == 5) {
			// TODO: make child paint
			// TODO: Then terminate/exit child

	

		}
	}
	printf("parent is exiting(last artist out!)\n");
	return 0;
}

