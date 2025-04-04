// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%99[^\n]", str);

    int length = strlen(str);

    printf("%d", length);
    return 0;
}