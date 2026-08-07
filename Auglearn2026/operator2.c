#include<stdio.h>
int main(void)
{
	short s1 = 10;
	short s2 = 20;
	short result = (short)(s1 + s2);

	printf("%d\n", result);
	//printf("%zu\n",sizeof((short)(s1+s2)));
}