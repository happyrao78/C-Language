#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    printf("Welcome to the Guess the Number game!\n");
    printf("I have selected a random number between 1 and 100. Try to guess it.\n");

    do {
        // Get user input
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        // Increment the number of attempts
        attempts++;

        // Provide feedback based on the user's guess
        if (userGuess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (userGuess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        }

    } while (userGuess != secretNumber);

    return 0;
}
