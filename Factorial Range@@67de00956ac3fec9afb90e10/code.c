#include <stdio.h>

int factorial(int n){
    if(n < 0){
        printf("Invalid range\d");
        return -1;
    }
    if(n == 0) return 1;
    
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
void factorialRange(int start, int end){

    if(start > end){
        printf("Invalid range\n");
        return;
    }
    for(int i = start; i <= end; i++){
        int result = factorial(i);
        if(result == -1){
            printf("Invalid range");
        }
        else{
            printf("%d\n", result);
        }
    }

}
