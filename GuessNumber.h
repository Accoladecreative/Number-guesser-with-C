#ifndef GUESS_NUMBER_H
#define GUESS_NUMBER_H

typedef struct {
    int secretNumber;
    int attempts;
} GuessNumber;

// Function prototypes
GuessNumber* createGame();
void destroyGame(GuessNumber* game);
void provideHint(GuessNumber* game, int guess);

#endif
