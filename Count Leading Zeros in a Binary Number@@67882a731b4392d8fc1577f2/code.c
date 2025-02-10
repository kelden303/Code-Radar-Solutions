#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // Edge case for num being 0
    if (num == 0) {
        printf("32");  // 32 leading zeros for a 32-bit integer
        return 0;
    }

    // Count leading zeros using bitwise shifting
    while (!(num & (1 << 31))) {  // While the most significant bit is 0
        count++;
        num <<= 1;  // Shift left
    }

    // Output the count of leading zeros
    printf("%d", count);
    return 0;
}
