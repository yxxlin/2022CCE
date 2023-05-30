#include <stdio.h>
int main()
{
	int a, b, num, ans=1;
	scanf("%d%d", &a, &b);
	printf("Enter two integers: \n");

	if(a>b) num=a;
	else num=b;

	for(int i=2; i<=num; i++){
		if(a%i==0 && b%i==0) ans=i;
	}
	printf("The greatest common divisor of %d and %d is %d\n", a, b, ans);
}
