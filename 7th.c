#include <stdio.h>

int main() {
    int length, width;

    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);

    printf("Area = %d", length * width);

    return 0;
}