#include <stdio.h>
int main(){
    int a, b, c;
    int average;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    average = (float)(a + b + c)/3;
    printf("%.2f", average);
    return 0;
}