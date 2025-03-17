#include <stdio.h>
#include <string.h>

// Function to perform insertion sort on an array of strings
void insertionSort(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char key[];
        strcpy(key, arr[i]); // Select the current string to be inserted
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }
        // Insert the key in its correct position
        strcpy(arr[j + 1], key);
    }
}

// Function to print an array of strings
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}



