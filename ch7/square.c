#include <stdio.h>
#include <stdint.h>
#include <ctype.h>


void testTypes(void)
{
    long testLong = 12;
    printf("\nLong: %ld\t\t Size: %zd\n", testLong, sizeof(testLong));

    short testShort = 12;
    printf("Short: %hd\t\t Size: %zd\n", testShort, sizeof(testShort));

    int testInt = 1;
    printf("Int: %d\t\t\t Size: %zd\n", testInt, sizeof(testInt));

    float testFloat = 2.4;
    printf("Float: %.2f\t\t Size: %zd\n", testFloat, sizeof(testFloat));

    double testDouble = 3.4;
    printf("Double: %.2f\t\t Size: %zd\n", testDouble, sizeof(testDouble));
}

int main()
{
    printf("This program prints table of squares\n");
    int limit;
    printf("Enter number of entries in table: ");
    scanf("%i", &limit);

    printf("Number\tSquare\t\tSize\n");
    for (int i = 1; i <= limit; i++) {
        float square = (float)i * i;
        printf("%d\t%f\t\t%zd\n", i, square, sizeof(square));
    }

    testTypes();
    return 0;
}

