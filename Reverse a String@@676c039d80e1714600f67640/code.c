// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character from input

    int length = strlen(str); // Get the length of the string
    int start = 0;
    int end = length - 1;

    // Reverse the string in place
    while (start < end) {
        // Swap characters from the start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }

    // Output the reversed string
    printf("%s\n", str);

    return 0;
}