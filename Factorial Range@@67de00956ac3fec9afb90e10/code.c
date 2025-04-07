#include <stdio.h>
void factorialRange(int start, int end){

    if(start > end || start < 0){
        printf("Invalid range\n");
        return;
    }
     int fact = 1;
     for(int i = 1; i <= start; i++){
        fact *= 1;
     }
     for(int i = start; i <= end; i++){
        if(i > 1){
            fact *= i;
        }
     }
     printf("%d\n", fact);

}
