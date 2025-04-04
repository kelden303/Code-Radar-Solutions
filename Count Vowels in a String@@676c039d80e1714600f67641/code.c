// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s", str);
    int vowels_count = 0;
     
    for(int i = 0; i < strlen(str); i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
       str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
        vowels_count++;   
    }
}
    printf("%d", vowels_count);
    return 0;

}