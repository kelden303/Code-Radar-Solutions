#include <stdio.h>
int main(){
    int N, i, j;
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
            printf("%d", N+1);
        }
        printf("\n");
    }
    return 0;
}