#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    char a[10][10];

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = '.';
        }
    }

    char nextChar = 'A';
    int x = 0, y = 0, direction;
    srand((unsigned)time(NULL));
    while (nextChar <= 'Z') {
        a[x][y] = nextChar;
        direction = rand() % 4;
        for (int i = 0; i < 4; i++) {
            if (direction == 0) {
                if ((x - 1) < 0 || a[x - 1][y] != '.') {
                    direction = (direction + 1) % 4;
                    continue;
                }
                x -= 1;
                break;
            } else if (direction == 1) {
                if ((y + 1) > 9 || a[x][y + 1] != '.') {
                    direction = (direction + 1) % 4;
                    continue;
                }
                y += 1;
                break;
            } else if (direction == 2) {
                if ((x + 1) > 9 || a[x + 1][y] != '.') {
                    direction = (direction + 1) % 4;
                    continue;
                }
                x += 1;
                break;
            } else {
                if ((y - 1) < 0 || a[x][y - 1] != '.') {
                    direction = (direction + 1) % 4;
                    continue;
                }
                y -= 1;
                break;
            }
        }
        if (a[x][y] != '.') {
            break;
        }
        nextChar = (nextChar + 1);
    }

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

