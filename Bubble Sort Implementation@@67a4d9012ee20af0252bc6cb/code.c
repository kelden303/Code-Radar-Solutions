#include <stdio.h>

void bubblesort(int arr[], int n){
    int i, j, temp;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; i++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    for (i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}