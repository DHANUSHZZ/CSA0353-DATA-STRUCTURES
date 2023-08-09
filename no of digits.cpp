#include <stdio.h>

int main() {
   int number, count = 0;

   printf("Enter an integer: ");
   scanf("%d", &number);

   while (number != 0) {
      count++;
      number /= 10;
   }

   printf("The number of digits in the integer is: %d\n", count);

   return 0;
}

