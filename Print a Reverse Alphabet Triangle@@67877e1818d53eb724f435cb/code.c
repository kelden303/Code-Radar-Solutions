// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        for(int j = i; j <= i; j--){
            printf(" ");
        }
        for(int k = 0; k <= n; k--){
            printf("%c ", 'A' + k );
        }
        printf("\n");
    }
    return 0;
}