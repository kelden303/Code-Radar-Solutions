#include <stdio.h>
int main (){
    int grade;
    scanf("%d", &grade);

    if (grade >= 90){
        printf("A");
    }
    else if (grade >= 80 && < 90){
        printf("B");
    }
    else if (grade >= 70 && < 80){
        printf("C");
    }
    else if (grade >= 60 && < 70){
        printf("D");
    }
    else if (grade < 60){
        printf("F");
    }
    else{
        printf("Enter a valid number");
    }
    return 0;
}