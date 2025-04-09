// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char rev[100];
    scanf("%s", str);

    int len = strlen(str);
    for(int i = 0; i < len; i++){
        char rev[i] = str(len - i - 1);
    }
    rev[len] = '\0';
    printf("%s", rev);
    return 0;
}