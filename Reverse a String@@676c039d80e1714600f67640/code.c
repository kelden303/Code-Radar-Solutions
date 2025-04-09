// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    scanf("%s", str);

    int len = strlen(str);
    for(int i = 0; i < len / 2; i++){
        char rev[100] = str(len - i - 1);
    }
    rev[len] = '\0';
    printf("%s", rev);
    return 0;
}