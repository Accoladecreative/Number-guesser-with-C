#include "GuessNumber.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

GuessNumber* createGame() {
    srand(time(NULL));
    GuessNumber* game = (GuessNumber*)malloc(sizeof(GuessNumber));
    if (game != NULL) {
        game->secretNumber = rand() % 100 + 1; // Generate random number between 1 and 100
        game->attempts = 0;
    }
    return game;
}

void destroyGame(GuessNumber* game) {
    if (game != NULL) {
        free(game);
    }
}

void provideHint(GuessNumber* game, int guess) {
    if (guess < game->secretNumber) {
        printf("Too low! Try again.\n");
    } else if (guess > game->secretNumber) {
        printf("Too high! Try again.\n");
    } else {
        printf("Congratulations! You guessed the number %d!\n", game->secretNumber);
    }
    game->attempts++;
}
