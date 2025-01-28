#include <stdio.h>
int main(){
    int num1, num2;
    int xor;
    scanf("%d %d", &num1, &num2);
    xor = num1 ^ num2;
    printf("%d", xor);
    return 0;
}