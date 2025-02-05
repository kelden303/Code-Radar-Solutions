#include <stdio.h>

int main(){
    int num,i, a = 1;
    scanf("%d", &num);
    if(num < 2){
    printf("Not Prime")
    }
    else{

    for(i = 2; i*i<= num; i++){
        if(num % i == 0){
            a = 0;
            break;
        }
    }
    if(a){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
    }
}