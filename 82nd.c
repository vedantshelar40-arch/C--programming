#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, amount;

    scanf("%lf %lf %lf", &p, &r, &t);

    amount = p * pow(1 + r / 100, t);

    printf("Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f", amount - p);

    return 0;
}