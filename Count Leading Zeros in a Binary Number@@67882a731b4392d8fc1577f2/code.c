#include <stdio.h>
int main(){
    int num, count = 0;
    scanf("%d", &num);
    if(num < 0){
        num = ~num + 1;
    }
    if (num == 0) {
        printf("32");  // 32 leading zeros for a 32-bit integer
        return 0;
    }
    while (!(num & (1 << 31))){
        count ++;
        num <<= 1;
    }
    printf("%d", count);
    return 0;
}