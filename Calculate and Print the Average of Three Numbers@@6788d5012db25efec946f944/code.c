#include <stdio.h>
int main(){
    int a, b, c;
    float average;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    average = (float)(a + b + c)/3;
    printf("Average: %.2f\n", average);
    return 0;
}