// Joviane Bellegarde
//
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

char colors[64][64 * 3];

void* paint(void* arg) {
	printf("Artist %d is painting\n", workID);
	for (int i = 0; i < 64 * 3; i++) {
		colors[workID][i] = workID;
	}

}

#define NUM_TASKS 64
pthread_mutex_t mutex1 
int main() {
	pthread_t threadIDs[NUM_TASKS];
	
	pthread_create(&threadIDs[0], NULL, paint, NULL);
	
	for (int i = 0; i < NUM_TASKS; i++) {

		pthread_create(&threadIDs[i], NULL, paint, NULL);
	}
	
	for (int i = 0; i < NUM_TASKS; i++) {
		pthread_join(threadIDs[i], NULL);

	}

}
