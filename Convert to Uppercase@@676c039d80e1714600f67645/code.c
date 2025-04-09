#include <stdio.h>

int main(){
    char str[100];
    scanf("%99[^\n]", str);
    
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    printf("%s\n", str);
    return 0;
}