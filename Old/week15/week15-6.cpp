#include <stdio.h>
int main()
{
    char line[3000];
    printf("�п�J�r��: ");

    scanf("%s", line);

    int N=0;
    for(int i=0;   ; i++){
        if(line[i]==0) break;
        N++;
    }

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i]);
    }
}
