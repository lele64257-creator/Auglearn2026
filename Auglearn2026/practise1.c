// 键盘录入一个两位数，要求该数字不能包含7，如果符合输出1，否则输出0
#include <stdio.h>

int main(void)
{
	int num;
	printf("输入一个两位数:");
	if (scanf_s("%d", &num) != 1) 
	{
		return 0;
	}

	int n = num < 0 ? -num : num; /* handle negative input */
	int tens = n / 10;
	int units = n % 10;

	if (n >= 10 && n <= 99 && tens != 7 && units != 7)
	{
		printf("1\n");
	} 
	else 
	{
		printf("0\n");
	}

	return 0;
}
