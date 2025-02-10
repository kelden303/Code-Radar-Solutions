#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // Edge case for num being 0
    if (num == 0) {
        printf("32");  // 32 leading zeros for a 32-bit integer
        return 0;
    }

    // Handle negative numbers by converting them to positive
    if (num < 0) {
        num = ~num + 1;
    }

    // Count leading zeros using bitwise shifting
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            break;
        }
        count++;
    }

    // Output the count of leading zeros
    printf("%d", count);
    return 0;
}
