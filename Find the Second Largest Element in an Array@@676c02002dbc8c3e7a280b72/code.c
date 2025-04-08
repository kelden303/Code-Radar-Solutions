#include <stdio.h>
int main(){
    int n;
    scnaf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int first = int_min, second = int_min;

    for(int i = 0; i < n; i++){
        if (arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    if(second == int_min){
        printf("No second largest number");
    }
    else{
        printf("%d\n", second);
    }
    return 0;
}