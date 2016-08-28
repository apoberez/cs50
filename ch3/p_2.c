#include <stdio.h>

int main(void)
{
   int number, month, day, year;
   loat price;
   printf("Enter item number: ");
   scanf("%i", &number);
   printf("Enter unit price: ");
   scanf("%f", &price);
   printf("Enter purchase date (mm/dd/yyy): ");
   scanf("%d/%d/%d", &month, &day, &year);

   printf("Item\tPrice\t\tDate\n%d\t$%7.2f\t%2d/%2d/%2d\n", number, price, month, day, year);

   return 0;
}
