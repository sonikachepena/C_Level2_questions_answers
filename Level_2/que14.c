#include <stdio.h>
#include <math.h>

// Function to interchange the first and last digits of a number
int interchangeFirstLastDigits(int num) {
    int lastDigit = num % 10;  // Get the last digit
    int temp = num;
    int numDigits = 0;

    // Count the number of digits
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    int divisor = pow(10, numDigits - 1); // Calculate divisor to extract the first digit
    int firstDigit = num / divisor; // Get the first digit

    // Remove the first and last digits from the number
    int middlePart = (num % divisor) / 10;

    // Construct the new number with first and last digits interchanged
    int newNumber = lastDigit * divisor + middlePart * 10 + firstDigit;

    return newNumber;
}

int main() {
    int number, result;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and get the result
    result = interchangeFirstLastDigits(number);

    // Print the result
    printf("Number after interchanging first and last digits: %d\n", result);

    return 0;
}

