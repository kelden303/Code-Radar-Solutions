#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    if(num & 1){
        print("Set");
    }
    else{
        print("Not Set");
    }
    return 0;
}