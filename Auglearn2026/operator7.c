#include<stdio.h>
int main(void)
{
	//关系运算符，成立1，不成立0
	int a = 10;
	int b = 20;

	printf("%d\n", a == b);//是否相等
	printf("%d\n", a != b);//是否不相等
	printf("%d\n", a > b);
	printf("%d\n", a >= b);
	printf("%d\n", a < b);
	printf("%d\n", a <= b);

	return 0;
}