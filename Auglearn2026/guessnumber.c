#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int answer;
    int guess;
	int attempts = 0;

	srand((unsigned int)time(NULL));//设置随机数种子和rand()配合使用
	answer = rand() % 100 + 1;//rand() 产生一个随机数 %100 + 1 产生一个1-100之间的随机数

    printf("I have chosen a number between 1 and 100.\n");

	while (1)//0为假，非0为真，while(1)表示一直循环
    {
        printf("Guess the number: ");
        scanf_s("%d", &guess);
        attempts++;

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
            printf("You guessed it in %d attempts", attempts);
			break;//退出循环
        }
    }

    return 0;
}