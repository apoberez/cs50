#include <stdio.h>

#define PI = 3.14

int main()
{
   float r;
   printf("Enter radius: ");
   scanf("%f", &r);
   
   float volume = (4.0f/3.0f)*3.14*r*r*r;
   printf("Volume of sphere with radius=%.2f, v=%.2f\n", r, volume);

   return 0;
}
