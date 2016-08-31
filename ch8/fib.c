#include <stdio.h>

int main()
{
    int fib[40] = {[0] = 1, [1] = 1};
    for(int i = 2; i < 40; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < 40; i++) {
        printf("%d\t%d\n", i+1, fib[i]);
    }

    return 0;
}
