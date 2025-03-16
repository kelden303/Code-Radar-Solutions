
// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to sqrt(num)
        if (num % i == 0)
            return 0; // Not a prime number
    }
    return 1; // Prime number
}