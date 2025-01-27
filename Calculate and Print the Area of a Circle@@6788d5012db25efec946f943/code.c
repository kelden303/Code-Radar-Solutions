#include <stdio.h>
#include <math.h>
int main(){
    int PI = 3.14;
    float r;
    float area;
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area: %.2f", area);
    return 0;
}