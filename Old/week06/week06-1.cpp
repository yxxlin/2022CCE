///畫星星, 口訣：左手i 右手j
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("i:%d星星\n", i);
    }
}

