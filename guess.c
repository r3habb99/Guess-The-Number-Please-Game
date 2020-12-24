#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 50 + 1;
    // Genrates a random number between 1 to 100;
    // printf("The Number Is %d", number);
    // This Printf function will show you the random number, so you can have look on it but we need to commentout this.

    // This do- while loop will keep running until the number is guessed.
    do
    {
        printf("Guess The Number Between 1 to 50 : ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("You Guessed it in %d attempts \n", nguesses);
        }
        nguesses++;

    } while (guess != number);
    return 0;
}