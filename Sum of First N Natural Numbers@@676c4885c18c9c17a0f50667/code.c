#include <stdio.h>
int main(){
    int num, i = 0, sum;
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++){
        sum += 1;
    }
 
    printf("%d", sum);
    return 0;
}