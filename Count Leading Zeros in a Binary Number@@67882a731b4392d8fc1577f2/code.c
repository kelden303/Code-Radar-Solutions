#include <stdio.h>
int main(){
    int num, count = 0;
    scanf("%d", &num);
    if(num < 0){
        num = ~num + 1;
    }
    while (!(num & (1 << 31))){
        count ++;
        num <<= 1;
    }
    printf("%d", count);
    return 0;
}