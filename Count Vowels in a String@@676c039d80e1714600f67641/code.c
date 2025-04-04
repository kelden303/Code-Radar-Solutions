// Your code here...
int main(){
    char str[100];

    scanf("%s", str);
    int vowels_count = 0

    if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' || str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U' ){
        vowels_count++;   
    }
    printf("%d", vowels_count);
    return 0;

}