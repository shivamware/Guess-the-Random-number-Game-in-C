/*Guess the random numbers game
Author Shivam ware date 20/08/2022*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The random values for numbers is %d\n",number);
    do
    {
        printf("Guess the numbers between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number please!! \n");
        }
        else if (guess < number)
        {
            printf("Higher  Number please!!  \n");
        }
        else
        {
            printf("You guesses in it %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}