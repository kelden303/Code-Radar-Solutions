// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    char conc = strcat(str2, str1);

    printf("%s", conc);
    return 0;


}