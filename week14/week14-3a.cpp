#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d=", a);
	printf("50*%d+", a/50);
	a=a%50;
	printf("10*%d+", a/10);
	a=a%10;
	printf("5*%d+", a/5);
	a=a%5;
	printf("1*%d", a/1);
}
