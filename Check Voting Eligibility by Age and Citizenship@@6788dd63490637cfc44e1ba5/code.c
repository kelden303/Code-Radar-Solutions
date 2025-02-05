#include <stdio.h>
int main(){
    int age, isCitizen;
    scanf("%d %d", &age, &isCitizen);

    if(isCitizen == 1 && age >= 18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}