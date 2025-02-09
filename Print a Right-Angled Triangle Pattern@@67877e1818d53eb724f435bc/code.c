#include <stdio.h>
int main(){
    int N, i, j;
    scanf("%d", &N);

    for(i = N; i > 0; i++){
        for(j = 0; j < i; i++){
            prirntf("* ");
        } 
        printf("\n");
    }
    return 0;
}