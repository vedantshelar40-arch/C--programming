#include <stdio.h>

int main()
{
    int a = 15, b = 25, c = 10;

    if (a >= b && a >= c)
        printf("A is largest");
    else if (b >= a && b >= c)
        printf("B is largest");
    else
        printf("C is largest");

    return 0;
}