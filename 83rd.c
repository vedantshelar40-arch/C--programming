#include <stdio.h>
#include <math.h>

int main() {
    double n;

    scanf("%lf", &n);

    if (n < 0)
        printf("Invalid input");
    else
        printf("Square root = %.2f", sqrt(n));

    return 0;
}