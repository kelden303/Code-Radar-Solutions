// Your code here...
#include <stdio.h>

int main(){
    char str[1000];
    int count = 0, i = 0;

    scanf(" %[^\n]", str);

    while(str[i] == ' '){
        i++;
    }
    if(str[i] == '\0'){
        printf("0\n");
        return 0;
    }

    for(int i = 0; str[i] != '\0'; i++){
        if((str[i] != ' ' && str[i+1] == ' ') || (str[i] != ' ' && str[i+1] == '\0')){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}