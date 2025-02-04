#include <stdio.h>
#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if (isalpha(a)){
        a = tolower(a);

        if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
          }
    else{
        printf("Special Character");
    }
    return 0;
}