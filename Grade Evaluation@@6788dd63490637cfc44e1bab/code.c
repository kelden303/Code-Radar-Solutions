#include <stdio.h>
int main(){
    char Grade;
    scanf("%c", &Grade);

    if(Grade == 'A'){
        printf("Excellent");
    }
    else if(Grade == 'B'){
        printf("Good");
    }
    else if(Grade == 'C'){
        printf("Average");
    }
    else if(Grade == 'D'){
        printf("Below Average");
    }
    else if(Grade == 'F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
}
return 0;
}