#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if (ch >= A && ch <= Z){
        printf("%c Uppercase\n", ch);
    }
    else if(ch >= a && ch <= z){
        printf("%c Lowercase\n", ch);
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}