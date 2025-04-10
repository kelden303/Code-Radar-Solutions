// Your code here...
#include <stdio.h>

int main(){
    char n[100];
    scanf("%c", n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - 1; j++){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("%c", k);
        }
        printf("\n");
    }
    return 0;
}