#include <stdio.h>

int is_single_digit_perfect_square(int digit) {
    // Check if the digit is a single-digit perfect square (0, 1, 4, 9)
    switch (digit) {
        case 0:
        case 1:
        case 4:
        case 9:
            return 1;
        default:
            return 0;
    }
}

int main() {
    int number;
    int count = 0;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract digits and count single-digit perfect square numbers
    while (number > 0) {
        int digit = number % 10;
        if (is_single_digit_perfect_square(digit)) {
            count++;
        }
        number /= 10;
    }

    // Print the result
    printf("Total number of single-digit perfect square numbers: %d\n", count);

    return 0;
}
