#include <stdio.h>
int main()
{
    char line[3000];
    printf("�п�J�ܪ����r��,���n���Ů�,����Enter\n");

    scanf("%s", line);
    printf("�����X�Ӧr���O?\n");
    printf("%s\n", line);
    int count=0;
    for(int i=0; line[i]!=0; i++){
        count++;
    }
    printf("count:%d\n", count);
}
