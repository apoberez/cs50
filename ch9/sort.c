#include <stdio.h>


void sort(int n, int arr[n]);

int main (void)
{
    int arr[7] = {7, 4, 5, 3, 8, 6, 9};
    sort(7, arr);
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void sort(int n, int arr[n])
{
    int up = 0, lp;
    while (up < n) {
        if (up + 1 < n && arr[up] > arr[up + 1]) {
            int temp;
            temp = arr[up];
            arr[up] = arr[up + 1];
            arr[up + 1] = temp;
            lp = up;
            while (lp > 0) {
                if (arr[lp] < arr[lp - 1]) {
                    temp = arr[lp];
                    arr[lp] = arr[lp - 1];
                    arr[lp - 1] = temp;
                    lp -= 1;
                } else {
                    break;
                }

            }
        }
        up += 1;
    }
}

