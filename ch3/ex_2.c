#include <stdio.h>

int main(void)
{
   int m, y, d;
   printf("Enter a date (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &m, &d, &y);
   printf("Your enterd date: %4d%2d%2d\n", y, m, d);

   return 0;
}
