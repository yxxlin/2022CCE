#include <stdio.h>
#include <string.h>
char line[3000];
char line2[3000];

int main()
{
    printf("�п�J�@��r(���n���Ů�)\n");
    scanf("%s", line);

    int N = strlen(line);
    printf("�r����׬O:%d\n", N);

    strcpy(line2, line);
    printf("line2: %s\n", line2);
}
