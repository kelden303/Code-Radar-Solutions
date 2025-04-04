// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str1, str2;
    scanf("%s\n %s", str1, str2);

    char conc = strcat(str2, str1);

    printf("%s", conc);
    return 0;


}