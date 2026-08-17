#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int answer;
    int guess;

    srand((unsigned int)time(NULL));
    answer = rand() % 100 + 1;

    printf("I have chosen a number between 1 and 100.\n");

    while (1)
    {
        printf("Guess the number: ");
        scanf_s("%d", &guess);

        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Correct!\n");
            break;
        }
    }

    return 0;
}