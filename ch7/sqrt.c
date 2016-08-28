#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Enter positive number:\t");
    float number, result, delta = 0.00001;
    scanf("%f", &number);
    result = number/2;
    float min = 0, max = number, q;
    printf("Min\t\tMax\t\tResult\n");
    printf("%4.5f\t\t%4.5f\t\t%4.5f\n", min, max, result);
    while (fabsf(number - result * result) > delta) {
        q = result * result;
        if (number - q < 0) {
            max = result;
        } else {
            min = result;
        }
        result = (min + max) / 2;
        printf("%4.5f\t\t%4.5f\t\t%4.5f\n", min, max, result);
    }
    printf("Square root:\t\t%.4f\n", result);

    return 0;
}
