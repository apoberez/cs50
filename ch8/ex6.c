#include <stdio.h>


int main(void)
{
    int segments[10][7] = {
        {0, 1, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
    };

    printf("Enter number: ");
    int number;
    scanf("%d", &number);

    for (int i = 0; i < 5; i++) {
        int temp = number;
        while(temp){
            temp /= 10;
        }
    }

    return 0;
}
