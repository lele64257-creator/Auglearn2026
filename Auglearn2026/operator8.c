#include<stdio.h>//逻辑运算符
int main(void)
{
	// &&:而且
	// ||：或者
	// !：取反
	printf("%d\n",1 && 1);//1
	printf("%d\n",0 && 0);//0
	printf("%d\n",1 && 0);//0
	printf("%d\n",0 && 1);//0

	printf("%d\n", 1 || 1);//1
	printf("%d\n", 0 || 0);//0
	printf("%d\n", 1 || 0);//1
	printf("%d\n", 0 || 1);//1

	printf("%d\n", !1);//0
	printf("%d\n", !0);//1

	return 0;
}