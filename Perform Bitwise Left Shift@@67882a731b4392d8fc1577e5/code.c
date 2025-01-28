#include <stdio.h>
int main(){
    int num1, num2;
    int position;
    scanf("%d %d", &num1, &num2);
    position = num1 << num2;
    printf("%d", position);
    return 0;
}


