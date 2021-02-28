// Joviane Bellegarde
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

// Modify your paint function here
void paint(int workdID) {
	printf("Artist %d is painting\n", wordID);
}

int main(int argc, char** argv) {

	int numberOfArtists = 8; // How many child processes do we want?

	pid_t pid;
	// main loop where we fork new threads
	for(int i = 0; i < numberOfArtists; i++) {
		// (1) Perform a fork
		pid = vfork();

		// (2) Make only the child do some work (i.e pain) and then terminate.
		if (pid == 0) {
			// TODO: make child paint
			printf("The child is painting\n");
			paint(getpid());
			// TODO: Then terminate/exit child
			exit(0);
	

		}
	}
	printf("parent is exiting(last artist out!)\n");
	return 0;
}

