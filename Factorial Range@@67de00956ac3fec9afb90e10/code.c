#include <stdio.h>

int factorial(int n){
    if(n <= 0){
        return 1;
    }
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= 1;
    }
    return fact;
}
int factorialRange(int start, int end){

    if(start > end){
        return 1;
    }
    for(int i = start; i < end; i++){
        printf("%d\n", factorial(i));
    }

}
