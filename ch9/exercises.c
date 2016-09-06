#include <stdio.h>


int add (int a, int b)
{
    return a + b;
}

int check(int x, int y, int n)
{
    return x < n && x >= 0 && y < n && y >= 0;
}

int findGCD(int x, int y)
{
    while (x % y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return y;
}

int numDigits(int num)
{
    int result = 0;
    do {
        num /= 10;
        result += 1;
    } while (num > 0);

    return result;
}

int max(int n, int arr[])
{
    int max;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

float avg(int n, int arr[]) 
{
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return sum/n;
}
