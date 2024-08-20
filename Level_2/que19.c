#include <stdio.h>

int main() {
    int num, hundreds_digit, tens_digit;
    int is_hundreds_prime = 1, is_tens_prime = 1;

    // Get a 4-digit number from the user
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Extract the hundreds and tens digits
    hundreds_digit = (num / 100) % 10;
    tens_digit = (num / 10) % 10;

    // Check if the hundreds digit is prime
    if (hundreds_digit <= 1) {
        is_hundreds_prime = 0;
    } else {
        for (int i = 2; i <= hundreds_digit / 2; i++) {
            if (hundreds_digit % i == 0) {
                is_hundreds_prime = 0;
                break;
            }
        }
    }

    // Check if the tens digit is prime
    if (tens_digit <= 1) {
        is_tens_prime = 0;
    } else {
        for (int i = 2; i <= tens_digit / 2; i++) {
            if (tens_digit % i == 0) {
                is_tens_prime = 0;
                break;
            }
        }
    }

    // Print results
    if (is_hundreds_prime) {
        printf("The hundreds digit %d is prime.\n", hundreds_digit);
    } else {
        printf("The hundreds digit %d is not prime.\n", hundreds_digit);
    }

    if (is_tens_prime) {
        printf("The tens digit %d is prime.\n", tens_digit);
    } else {
        printf("The tens digit %d is not prime.\n", tens_digit);
    }

    return 0;
}
