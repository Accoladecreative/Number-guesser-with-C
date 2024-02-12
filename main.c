#include "GuessNumber.h"
#include <stdio.h>

int main() {
    GuessNumber* game = createGame();
    if (game == NULL) {
        printf("Failed to create game. Exiting...\n");
        return 1;
    }

    printf("Welcome to the Guess the Number game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    int guess;
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        provideHint(game, guess);
    } while (guess != game->secretNumber);

    printf("You guessed the number in %d attempts.\n", game->attempts);

    destroyGame(game);
    return 0;
}
