#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int root = (int)sqrt(num);
    return (root * root == num);
}

int countTwoDigitPerfectSquares(int num) {
    int count = 0;
    for (int i = 10; i <= 99; i++) {
        if (isPerfectSquare(i)) {
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                if (digit == i / 10 || digit == i % 10) {
                    count++;
                    break;
                }
                temp /= 10;
            }
        }
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countTwoDigitPerfectSquares(num);
    printf("Total number of two-digit perfect square numbers in the number: %d\n", result);

    return 0;
}
