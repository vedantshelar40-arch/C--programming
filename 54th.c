#include <stdio.h>

int main() {
    int base, power, i;
    int result = 1;

    scanf("%d %d", &base, &power);

    for (i = 1; i <= power; i++) {
        result *= base;
    }

    printf("Answer = %d", result);

    return 0;
}