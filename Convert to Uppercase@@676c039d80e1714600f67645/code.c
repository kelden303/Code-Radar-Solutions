#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    scanf("%s", str);
    
    if(islower(str)){
      printf("%s", toupper(str));  
    }
    else{
        printf("%s", tolower(str));
    }
    return 0;
}