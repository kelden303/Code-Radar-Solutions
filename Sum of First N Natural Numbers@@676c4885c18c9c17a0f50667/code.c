#incluce <stdio.h>
int main(){
    int num, i = 0;
    scanf("%d", &num);

    while(num > 0){
        i += num / 10;
        num /= 10;
    }
    printf("%d", i);
    return 0;
}