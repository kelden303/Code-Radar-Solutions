#include <stdio.h>
int main(){
int n, i;
int isSorted = 1;

scanf("%d", &d);
int arr[n];

for(int i = 0; i < n; i++){
    scanf("%s", &arr[i]);
}
for (int i = 0; i < n - 1; i++){
    if(arr[i] > arr[i + 1]){
        isSorted = 0;
        break;
    }
}
if (isSorted){
    printf("Sorted\n");
}
else{
    printf("Not Sorted\n");
}
return 0;
}