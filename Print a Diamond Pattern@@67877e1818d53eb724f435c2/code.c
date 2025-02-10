#include <stdio.h>
int main(){    
    int N, i, j, k;
    scanf("%d", &N);
    
    if(N%2 == 0){
        printf("Enter a odd number!\n");
        return 1;
    }

    for(i = 1; i <= N; i+= 2){
        for(k = 0; k < (N-i)/2; k++){
            printf(" ");
        }
        for(j = 0; j < i; j++){
            printf("*");
        }    
        printf("\n");
    }
    for(i = N -2; i > 0; i -= 2){
        for(k = 0; k < (N-i)/2; k++){
            printf(" ");
        }
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}