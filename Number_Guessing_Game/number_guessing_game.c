#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess, score;
    int no_of_guesses = 0;
    int guess_limit = 8;
    srand(time(NULL));
    printf("\n\nWelcome to the World of Guessing Numbers\n");
    printf("Guess a randomly generated number between 1 to 100. You have 8 Attempts only.");
    random = rand() % 100 + 1;       //Random Number is generated between 1 to 100

    do {
        if (no_of_guesses > guess_limit) {
            printf("\nYou have Lost! Randomly generated number is %d\n", random);
            break;
        }
        printf("\n\nPlease Enter your Guess between 1 to 100: ");
        scanf("%d", &guess);
        if (guess < 1 || guess > 100) {
            printf("Invalid Input number");
            break;
        }
        no_of_guesses++;
        if(guess < random) {
            printf("Guess a Larger Number.\n");
        } else if(guess > random) {
            printf("Guess a Smaller Number. \n");
        } else {
            printf("Congratulations !!! You have successfully guessed the Number %d and won in %d attempt(s).", random, no_of_guesses);
            if(no_of_guesses == 8) {
                    printf("\nBut, Oops! Your Score is 30.");
                    break;
            }
            else if(no_of_guesses == 7) {
                    printf("\nAww! Your Score is 40.");
                    break;
            }
            else if(no_of_guesses == 6) {
                    printf("\nOh! Your Score is 50.");
                    break;
            }
            else if(no_of_guesses == 5) {
                    printf("\nOh! Your Score is 60.");
                    break;
            }
            else if(no_of_guesses == 4) {
                    printf("\nWow! Your Score is 70.");
                    break;
            }
            else if(no_of_guesses == 3) {
                    printf("\nWow! Your Score is 80.");
                    break;
            }
            else if(no_of_guesses == 2) {
                    printf("\nWow! Your Score is 90.");
                    break;
            }
            else if(no_of_guesses == 1) {
                    printf("\nHurrah! Your Score is 100.");
                    break;
            }
      }
    } while(guess != random);
    printf("\nBye Bye, Thanks for Playing.");
}