#include <stdio.h>

long factorial(int number);

int main(void)
{
    printf("Enter a positive integer: ");
    int number;
    scanf("%d", &number);
    printf("Factorial of %d: %ld\n", number, factorial(number));
    return 0;
}

long factorial(int number)
{
    if (number == 1) {
        return 1;
    } else {
        long f = factorial(number - 1);
        printf("Number: %d\tFactorial: %ld\n", number - 1, f);
        return f * number;
    }
}
