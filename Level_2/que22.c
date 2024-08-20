#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a two-digit odd number
bool isTwoDigitOdd(int num) {
    return (num >= 10 && num <= 99 && num % 2 != 0);
}

// Function to count two-digit odd numbers in the given number
int countTwoDigitOddNumbers(int num) {
    int count = 0;
    int prevDigit = -1;  // To store the previous digit during iteration
    int currentDigit;

    while (num > 0) {
        currentDigit = num % 10;  // Get the last digit
        num /= 10;  // Remove the last digit

        if (prevDigit != -1) {  // Check if we have two digits
            int twoDigitNumber = prevDigit * 10 + currentDigit;  // Form the two-digit number
            if (isTwoDigitOdd(twoDigitNumber)) {
                count++;
            }
        }
        
        prevDigit = currentDigit;  // Update previous digit for the next iteration
    }

    return count;
}

int main() {
    int number, result;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and get the result
    result = countTwoDigitOddNumbers(number);

    // Print the result
    printf("Total number of two-digit odd numbers: %d\n", result);

    return 0;
}
