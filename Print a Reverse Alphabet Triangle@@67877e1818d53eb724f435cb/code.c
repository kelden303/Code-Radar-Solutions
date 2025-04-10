// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i--){
        for(int j = i; j <= i; j++){
            printf(" ");
        }
        for(int k = 0; k <= n; k--){
            printf("%d ", 'A' + k );
        }
        printf("\n");
    }
    return 0;
}