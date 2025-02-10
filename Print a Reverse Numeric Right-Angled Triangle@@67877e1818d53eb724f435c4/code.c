#include <stdio.h>
int main(){
    int N, i, j;
    scanf("%d", &N);

    for(i = N-1; i >= 0; i--){
        for(j = 0; j < i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}