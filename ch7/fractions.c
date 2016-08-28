#include <stdio.h>

int findGCD(int a, int b)
{
    int temp;
    while(b != 0){
        temp = a;
        a = b;
        b = temp % a;
    }

    return a;
}

int main(void)
{
    int n, d, n1, n2, d1, d2;
    char op;
    printf("Enter expression: ");
    scanf("%d/%d%c%d/%d", &n1, &d1, &op, &n2, &d2);
    switch (op) {
        case '+':
            n = n1 * d2 + n2 * d1;
            d = d1 * d2;
            break;
        case '-':
            n = n1 * d2 - n2 * d1;
            d = d1 * d2;
            break;
        case '/':
            n = n1 * d2;
            d = d1 * n2;
            break;
        case '*':
            n = n1 * n2;
            d = d1 * d2;
            break;
        default:
            printf("'%c' unsupported operation.\n", op);
            return 1;
    }

    if((n % d) == 0){
        printf("Result: %d\n", n/d);
    } else {
        int gcd = findGCD(n, d);
        printf("Result: %d/%d\n", n/gcd, d/gcd);
    }

    return 0;
}

