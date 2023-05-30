#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a<0) a=-a;
	while((a/10)>0){
		a=a/10;
	}
	printf("%d\n", a);
}
