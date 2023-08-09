#include <stdio.h>

int main() {
   int number, reversed = 0;

   printf("Enter a number: ");
   scanf("%d", &number);

   for (; number != 0; number /= 10) {
      reversed = reversed * 10 + number % 10;
   }

   printf("The reverse of the number is: %d\n", reversed);

   return 0;
}

