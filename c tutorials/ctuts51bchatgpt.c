/*lets create a game of rock, paper and scissor
player 1: rock
player 2(computer): scissors ----> player 1 gets 1 point

write a C program to allow user to play this game three times with this computer . log the score of computer
and the player,display the name of the player at the end 
take user name as an input from user.*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int main() {
    int user_score = 0;
    int computer_score = 0;
    char user_choice[10];
    char computer_choice[10];
    const char *options[3] = {"rock", "paper", "scissors"};

    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < 3; i++) {
        printf("Enter your choice (rock/paper/scissors): ");
        scanf("%s", user_choice);

        int random_index = rand() % 3; // Generate a random number between 0 and 2
        const char *computer_choice = options[random_index];

        printf("\nYou chose %s, computer chose %s.\n", user_choice, computer_choice);

        if (strcmp(user_choice, computer_choice) == 0) {
            printf("Both players selected %s. It's a tie!\n", user_choice);
        } else if (strcmp(user_choice, "rock") == 0) {
            if (strcmp(computer_choice, "scissors") == 0) {
                printf("Rock smashes scissors! You win!\n");
                user_score++;
            } else {
                printf("Paper covers rock! You lose.\n");
                computer_score++;
            }
        } else if (strcmp(user_choice, "paper") == 0) {
            if (strcmp(computer_choice, "rock") == 0) {
                printf("Paper covers rock! You win!\n");
                user_score++;
            } else {
                printf("Scissors cuts paper! You lose.\n");
                computer_score++;
            }
        } else if (strcmp(user_choice, "scissors") == 0) {
            if (strcmp(computer_choice, "paper") == 0) {
                printf("Scissors cuts paper! You win!\n");
                user_score++;
            } else {
                printf("Rock smashes scissors! You lose.\n");
                computer_score++;
            }
        }
    }

    printf("\nUser score: %d\n", user_score);
    printf("Computer score: %d\n", computer_score);

    if (user_score > computer_score) {
        printf("\nYou won the game!\n");
    } else if (user_score < computer_score) {
        printf("\nYou lost the game!\n");
    } else {
        printf("\nThe game is a tie!\n");
    }

    return 0;
}
