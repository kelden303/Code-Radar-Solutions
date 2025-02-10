#include <stdio.h>
int main(){
    int num, binary[32], index =0;
    scanf("%d", &num);

    if(num == 0){
        printf("0\n");
        return 0;
    }
    while(num > 0){
        binary[index++] = num & 1;
        num >>= 1;
    }
    for (int i = index - 1; i >= 0; i--){
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}