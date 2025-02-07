#include <stdio.h>
int main(){
    int num, pos = 0;
    scanf("%d", &num);
    if(num == 0){
        printf("-1");
    }
    else{
        while (!(num & 1)){
            pos ++;
            num>>= 1;
        }
        printf("%d", pos);
    }
    return 0;
}