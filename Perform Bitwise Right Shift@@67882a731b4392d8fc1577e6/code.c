#include <stdio.h>
int main(){
    int num1, num2;
    int right;
    scanf("%d %d", &num1, &num2);
    right = num1 >> num2;
    printf("%d", right);
    return 0;
}