#include<stdio.h>

int main(void)
{
	int num;
	printf("请输入一个三位数:\n");
	scanf_s("%d",&num);

	int ge = num % 10;
	int shi = num / 10 % 10;
	int bai = num / 100 % 10;

	printf("个位是:%d",ge);
	printf("十位是:%d",shi);
	printf("百位是:%d",bai);

	return 0;
}