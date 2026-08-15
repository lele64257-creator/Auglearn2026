#include<stdio.h>

int main(void)
{
	int score;
	
	printf("Please input a score:");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100)
	{
		printf("Perfect");
	}
	else if (score >= 60 && score < 90)
	{
		printf("Pass");
	}
	else if (score >= 0 && score < 60)
	{
		printf("Fail");
	}
	else
	{
		printf("Invalid score");
	}
	return 0;
}