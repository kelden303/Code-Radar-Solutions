#include <stdio.h>
int main(){
    int a, b;
    if(scanf("%d %d", &a, &b) != 2){
        return 1;
    }
    if(a == b){
        printf("Equal\n");
    }

    else if(a > b){
        printf("First\n");
    }
    else{
        printf("Second\n");
    }
    return 0;
}