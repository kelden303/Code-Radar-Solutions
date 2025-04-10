// Your code here...
#include <stdio.h>

int main(){
    char n;
    scanf("%c", n);

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n - 1; j++){
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}