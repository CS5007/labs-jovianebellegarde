// Joviane Bellegarde
//
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <pthread.h>
#include <unistd.h>

#define NUM_TASKS 64
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

int globalCounter = 1;

char colors[64][64 * 3];

void* paint(void* arg) {
	if (arg == NULL) {
		return NULL;
	}
}


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
