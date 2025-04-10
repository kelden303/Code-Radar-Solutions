// Your code here...
#include <stdio.h>

int main(){
    char n;
    scanf("%c", n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}