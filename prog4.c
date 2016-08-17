#include <stdio.h>
#include <math.h>

int main(void)
{
	int F = 27;
	int C = (F - 32)/1.8;
	printf("Temperature in celsius = %d\n", C); 

	float x = 2.55;
	float result = 3 * pow(x, 3) - 5 * pow(x, 2) + 6; 
	printf("Result = %f\n", result); 
	
	for(int i = 1; i < 50; i++)
	{
		printf("%i\n", i);
	}

	return 0;
}
