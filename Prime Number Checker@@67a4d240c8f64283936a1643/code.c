#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // Number is prime
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t); // Read the number of inputs

    while (t--) {
        int num; // Variable to store the number to check
        scanf("%d", &num); // Read the number
        printf("%d\n", is_prime(num)); // Print the result of the prime check
    }

    return 0;
}