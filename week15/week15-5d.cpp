#include <stdio.h>
int main()
{
	int max, min, a;
	scanf("%d", &a);
	max=a;
	min=a;
	while(a!=0){
		scanf("%d", &a);
		if(max<a) max=a;
		if(min>a) min=a;
	}
	printf("[%d,%d]", min, max);
}
