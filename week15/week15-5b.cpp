#include <stdio.h>
int main()
{
	int n, a[10], b[10];
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		scanf("%d", &b[i]);
		printf("%d ", a[i]+b[i]);
	}
}
