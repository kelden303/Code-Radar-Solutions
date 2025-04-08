#include <stdio.h>

int main() {
    char str[1000];
    int count = 0, i = 0;
    // Read a line of input, including spaces
    scanf(" %[^\n]", str);

    // Skip leading spaces
    while (str[i] == ' ') {
        i++;
    }

    // If the string is empty or contains only spaces
    if (str[i] == '\0') {
        printf("0\n"); // Print 0 for empty input
        return 0;
    }

    // Count words
    for (; str[i] != '\0'; i++) {
        // Check if the current character is not a space and the next character is a space or end of string
        if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i + 1] == '\0')) {
            count++;
        }
    }

    // Print the total number of words
    printf("%d\n", count);
    return 0;
}