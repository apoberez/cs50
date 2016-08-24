#include <stdio.h>

int main(void)
{
   int bills[6] = {50, 20, 10, 5, 2, 1};

   int value;
   printf("Enter value in dollars: ");
   scanf("%i", &value);

   int billsCount = 0;
   for (int i = 0; i < 6; i++) {
      billsCount = value / bills[i];
      value %= bills[i];
      printf("$%-2i bills: %i\n", bills[i], billsCount);
   }

   return 0;
}
