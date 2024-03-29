// Joviane Bellegarde
/* This is an example of an orphan process because the parent
 * terminated before the child process. I couldn't kill the 
 * parent pid, but I could kill the child's ID.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

	pid_t pid;
	int x = 1;

	pid = fork();

    if(pid==0){
    	printf("Running child forever now pid=%d\n",getpid());
    	while(1){
    	}
    }else{
	// Run the parent
	printf("Terminating parent pid=%d\n",getpid());
	exit(0);
    }

	return 0;
}

