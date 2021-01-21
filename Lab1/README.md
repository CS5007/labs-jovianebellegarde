# Lab 1 — The Guessing Game
## Instructions
Write a program that plays the game of **Guess the Number**. Your program should first choose the number to be guessed by selecting an integer at random in the range 1 to 500. Hint: you can generate random numbers using [rand](https://www.cplusplus.com/reference/cstdlib/rand/). The program should then display the following message: 

```
Can you guess the number between 1 and 500?
Enter your first guess: 
```

The program should allow the user to enter their selected number and give them a maximum of 5 attempts to guess the correct number (Hint: use a loop).  If the guess is less than the randomly generated number, display:

```
Your guess is too low. Try again! 
```

The user should then be allowed to make another attempt. If the guess is greater than the randomly generated number, display:

```
Your guess is too high. Try again! 
```

The user should then be allowed to make another attempt. If the user guesses the correct number, your program should output the following message and then terminate:

```
Correct!
```

## Deliverable
* Add the logic for your program in main.c
    * Make sure to 'add/commit/push' the main.c file to the repo in this directory.
* Add your name in the comments section of the main.c file and push the updates.
