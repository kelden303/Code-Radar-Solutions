#include <stdio.h>
int main(){
    int num;
    int one;
    scanf("%d", &num);
    one = ~ num;
    printf("%d", one);
    return 0;
}