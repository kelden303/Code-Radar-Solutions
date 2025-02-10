#include <stdio.h>

int main() {    
    int N, i, j, k;

    // Take input for N
    scanf("%d", &N);
    // Upper half of the diamond (including the middle row)
    for (i = 1; i <= 2 * N-1; i += 2) {
        // Print leading spaces
        for (k = 0; k < (2 * N- i) / 2; k++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    // Lower half of the diamond (excluding the middle row)
    for (i = 2 * N - 3; i > 0; i -= 2) {
        // Print leading spaces
        for (k = 0; k < (2 * N - i) / 2; k++) {
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
