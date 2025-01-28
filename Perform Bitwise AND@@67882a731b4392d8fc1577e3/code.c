#include <stdio.h>
int main(){
    int num1, num2;
    int AND;
    scanf("%d %d", &num1, &num2);
    AND = num1 & num2;
    printf("%d", AND);
    return 0;
}