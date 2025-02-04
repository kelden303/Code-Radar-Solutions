#include <stdio.h>
int main(){
    int age;
    scanf("%d", &age);

    if( age > 18){
        printf("Eligible");
    }
    else if (age < 18){
        printf("Not Eligible");
    }
    else{
        printf("Enter a valid number");
    }
    return 0;
}