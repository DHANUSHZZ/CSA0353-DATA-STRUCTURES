#include <stdio.h>

int main() {
    int decimalNumber, binaryNumber[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        i++;
    }

    printf("The binary number is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNumber[j]);
    }

    return 0;
}

