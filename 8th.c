#include <stdio.h>

int main() {
    int length, width;

    scanf("%d %d", &length, &width);

    printf("Perimeter = %d", 2 * (length + width));

    return 0;
}