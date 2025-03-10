#include <stdio.h>

// Function to perform Bubble Sort  
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array  
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" "); // Print space before next element
        }
        printf("%d", arr[i]);
    }
    printf("\n"); // New line after printing all elements
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);
    printArray(arr, n);
    
return 0;
}