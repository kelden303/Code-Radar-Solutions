#include <stdio.h>
int main(){
    int N, i, j;
    scanf("%d", &N);
    
    for( i = N; i <= N; i++){
        for(j = 0; j < i; j++){
            printf("%c", 'A' + j)
        }
        printf("\n");
    }
    return 0;
}