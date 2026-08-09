#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = ++a;//先加后用

	printf("%d\n", a);
	printf("%d\n", b);

	int c = 10;
	int d = c++;//先用后加

	printf("%d\n", c);
	printf("%d\n", d);

	return 0;
}