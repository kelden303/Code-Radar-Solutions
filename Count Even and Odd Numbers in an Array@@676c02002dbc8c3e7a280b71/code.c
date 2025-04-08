#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int even_count = 0;
    int odd_count = 0;

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even_count++;
        }
        printf("%d\n",even_count);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            odd_count++;
        }
        printf("%d\n",odd_count);
    }
    return 0;
}