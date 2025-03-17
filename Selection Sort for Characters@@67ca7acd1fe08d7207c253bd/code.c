// Your code here...
#include <stdio.h>
#include <string.h>

// Function to perform selection sort on an array of characters
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum character in the unsorted part of the array
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum character with the first character of the unsorted part
        char temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Function to print an array of characters
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

