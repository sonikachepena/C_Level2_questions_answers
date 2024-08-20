#include <stdio.h>

int is_digit(int digit) {
    // Check if the digit is a single-digit prime number
    if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
        return 1;
    }
    return 0; // Ensure to return 0 if the digit is not a prime
}

int main() {
    int digit;
    int count = 0;
    long long int n;

    printf("Enter your large number: ");
    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10; // Extract the last digit
        if (is_digit(digit)) {
            count++; // Increment count if the digit is prime
        }
        n /= 10; // Remove the last digit
    }

    printf("The count of single-digit prime numbers: %d\n", count);

    return 0;
}
