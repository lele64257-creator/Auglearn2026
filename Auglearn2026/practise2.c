#include<stdio.h>

int main(void)
{
	int score;
	
	printf("Please input a score:");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100)
	{
		printf("perfect");
	}
	else if (score >= 60 && score < 90)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}

	return 0;
}