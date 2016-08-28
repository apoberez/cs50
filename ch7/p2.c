#include <stdio.h>

int main(void)
{
    printf("Enter phone number: ");
    char number;

    while ((number = getchar()) != '\n') {
        if (number >= 'A' && number < 'Z'){
            number = '0' + (((number - 'A') / 3) + 2);
        }
        putchar(number);
    }
    printf("\n");

    return 0;
}
