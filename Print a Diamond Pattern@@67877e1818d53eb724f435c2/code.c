#include <stdio.h>

int main() {    
    int N, i, j, k;

    // Take input for N
    scanf("%d", &N);
    // Check if N is odd
    if (N % 2 == 0) {
        printf("Enter an odd number!\n");
        return 1;  // Exit if the input is even
    }

    // Upper half of the diamond (including the middle row)
    for (i = 1; i <= N; i += 2) {
        // Print leading spaces
        for (k = 0; k < N / 2; k++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    // Lower half of the diamond (excluding the middle row)
    for (i = N - 2; i > 0; i -= 2) {
        // Print leading spaces
        for (k = 0; k < (N - i) / 2; k++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
