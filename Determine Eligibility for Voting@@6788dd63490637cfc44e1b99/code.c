#include <stdio.h>
int main(){
    int age;
    scanf("%d", &age);

    if( age >= 18){
        printf("Eligible");
    }
    else if (age < 0){
        printf("Enter a valid age");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}