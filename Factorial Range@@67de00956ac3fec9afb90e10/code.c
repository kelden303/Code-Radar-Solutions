#include <stdio.h>

void factorialRange(int start, int end) {
    // Validate range
    if (start > end || start < 0) {
        printf("Invalid range\n");
        return;
    }

    // Handle 0! case separately
    if (start == 0) {
        printf("1\n");  // 0! = 1
        start = 1;      // Continue from 1
        if (end == 0) return;  // If only 0 was requested
    }

    // Calculate factorial for start number
    int fact = 1;
    for (int i = 1; i <= start; i++) {
        fact *= i;
    }
    printf("%d\n", fact);

    // Calculate subsequent factorials incrementally
    for (int i = start + 1; i <= end; i++) {
        fact *= i;
        printf("%d\n", fact);
    }
}