#include <stdio.h>
int main(){
    int temp;
    scanf("%d", &temp);

    if(temp <= 0){
        printf("Freezing");
    }
    else if(temp > 0){
        printf("Above Freezing");
    }
    else{
        printf("Enter a valid temperature");
    }
    return 0;
    
}