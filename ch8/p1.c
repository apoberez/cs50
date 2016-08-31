#include <stdio.h>

int main(void)
{
    int digits[10] = {};
    printf("Enter number: ");
    int number;
    scanf("%d", &number);
    while (number) {
        digits[number % 10] += 1;
        number /= 10;
    }
    printf("Digit:\tOccurences:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t%d\n", i, digits[i]);
    }

    return 0;
}

