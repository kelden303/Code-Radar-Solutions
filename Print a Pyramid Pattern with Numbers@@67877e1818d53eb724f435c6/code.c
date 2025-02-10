#include <stdio.h>
int main(){
    int N, i, j, k;
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        for(k = 1; k <= N-1; k++){
            printf(" ");
        }
        for(j =1; j <= i; j++){
            printf("%d", j);
        }
        for(j = i -1; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n]");
    }
    retrun 0;
}