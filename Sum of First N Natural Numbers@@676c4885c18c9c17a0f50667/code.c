#include <stdio.h>
int main(){
    int num, i=1, sum=0;
    scanf("%d", &num);
    
    while(i <= num){
         sum += i;
         i++;
    }
    return 0;
}