#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("Enter a sentence: ");
    int words = 0, totalLen = 0;
    char ch;
    bool isInWord = false;

    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            totalLen += 1;
            if (!isInWord) {
                words += 1;
                isInWord = true;
            }
        } else {
            isInWord = false;
        }
    }
    if (words) {
        printf("Average world length: %.1f\n", (float)totalLen/words);
    }

    return 0;
}
