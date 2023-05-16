#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	printf("Enter the number of values to be processed: ");
	int i, sum=1;
	for(int i=0; i<a; i++){
		printf("Enter a value: ");
		scanf("%d", &b);
		sum*=b;
	}
	printf("Product of the %d values is %d", a, sum);
}
