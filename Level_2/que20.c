#include <stdio.h>

int main() {
    int i;
    int isprime;

    for (i = 2; i < 10; i++) {
        isprime = 1;  // Assume the number is prime
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isprime = 0;  // Found a divisor, so it's not prime
                break;        // No need to check further
            }
        }
        
        if (isprime) {
            printf("%d is prime\n", i);  // Print the prime number
        }
    }

    return 0;
}
