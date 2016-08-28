#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("Enter a first and a last name: ");
    char ch, fname = 0;
    while (true) {
        ch = getchar();
        if (ch == ' ') {
            if (fname) {
                break;
            }
            continue;
        }
        if (!fname) {
            fname = ch;
        }
    }

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            continue;
        }
        putchar(ch);
    }

    if (fname) {
        printf(", %c.\n", fname);
    } 

    return 0;
}
