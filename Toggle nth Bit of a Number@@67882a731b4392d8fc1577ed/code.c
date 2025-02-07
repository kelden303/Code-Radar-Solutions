#include <stdio.h>
int main(){
    int num, num1;
    scanf("%d %d",&num, &num1);

    num ^= 1 << num1;
    printf("%d\n", num);

    return 0;
}