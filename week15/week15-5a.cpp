#include <stdio.h>
int main()
{
	int x1, y1, x2, y2, a, b, c;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	scanf("%d", &x2-x1);
	scanf("%d", &y2-y1);
	a=x2-x1;
	b=y2-y1;
	c=a*b;
	if(c>0) printf("%d", c);
	else printf("%d", -c);
}
