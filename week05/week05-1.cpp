#include <stdio.h>
int main()
{
    int a=10;
    printf("a:%d��b%d\n", a, &a);
    int b=20;
    printf("b:%d��b%d\n", b, &b);
    int c=30;
    printf("c:%d��b%d\n", c, &c);
}
