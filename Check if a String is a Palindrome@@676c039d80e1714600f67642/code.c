// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    isPalindrome = 1;

    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1]);
        isPalindrome = 0;
        break;
    }
    if(isPalindrome){
        printf("Yes\n");
    }
    else{
        Printf("No");
    }
    return 0;

}