#include <stdio.h>
int factorialRange(int start, int end){
    for(int i = start; i < end; i++){
        if(i == 0){
            return 1;
        }
        else{
            return i * factorialRange(i - end);
        }
    }
}
