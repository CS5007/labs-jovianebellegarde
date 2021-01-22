//Student Name: Joviane Bellegarde

// Add your program here!
//
//
/* This assignment is a guessing game. The program needs to guess a game between 1 and 500.
 * Going to need to use a for loop since we are giving them 5 attempts to make a guess.
 * May need to use a function to get this to work.
 * Source: https://www.cplusplus.com/reference/cstdlib/rand/
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playRound(int randNumber) {

	int round = 0;
	int guess = 0;

	// this code controls the guessing game
	while (round < 5) {

		printf("\nCan you guess the number between 1 and 500?\n");
		printf("Enter your guess: ");
		scanf("%d", &guess);

		if (guess < randNumber) {
			printf("Your guess is too low. Try again!\n"); 
		} else if (guess > randNumber) {
			printf("Your guess is too high. Try again!\n");
		} else {
			printf("Correct!\n");
			break;
		}
		round++;		
	}
}


int main() {
	// using srand to generate a new random number for each new game
	srand(time(NULL));
	
	// generating random number from range 1 to 1000
	int randomNumber = rand() % 500 + 1;

	//calling the play round function here
	playRound(randomNumber);
	return 0;	
}
