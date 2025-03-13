#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "ex_do_while.h"

#include <stdio.h>

void ex1() {
    int n;
    do {
        printf("\nEnter positive number: ");
        scanf("%d", &n);
        if (n > 0) {
            printf("You entered positive number\n");
        }
    } while (n <= 0);
}

bool is_palindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    bool is_palindrome = true;

    do {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            is_palindrome = false;
            break;
        }

        left++;
        right--;
    } while (left < right);

    return is_palindrome;
}

void play_guessing_game() {
    int number, guess;
    bool guessed_correctly = false;

    // Seed the random number generator
    srand(time(NULL));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number: %d\n", number);
            guessed_correctly = true;
        }
    } while (!guessed_correctly);
}


