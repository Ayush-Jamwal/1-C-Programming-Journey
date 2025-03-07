#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    int random_number = (rand() % 100) + 1; // Generate a random number between 1 and 100
    int num_guesses = 0;  // Counter for guesses
    int num_guessed = 0;  // User's guessed number

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &num_guessed);  // Get user's guess

        num_guesses++;  // Count each attempt

        if (num_guessed > random_number)
        {
            printf("Lower guess please!\n");
        }
        else if (num_guessed < random_number)
        {
            printf("Higher guess please!\n");
        }
        else
        {
            printf("Congrats! You guessed the number!\n");
            printf("You guessed the number in %d attempts.\n", num_guesses);
        }

    } while (num_guessed != random_number);  // Loop until correct guess

    return 0;
}
