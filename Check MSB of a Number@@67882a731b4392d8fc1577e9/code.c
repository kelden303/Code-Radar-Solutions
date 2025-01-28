#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    if(num > 2147483648){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}