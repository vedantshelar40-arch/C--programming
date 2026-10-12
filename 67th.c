#include <stdio.h>

int main() {
    int a[5] = {12, 45, 7, 89, 23};
    int i, min = a[0];

    for (i = 1; i < 5; i++) {
        if (a[i] < min)
            min = a[i];
    }

    printf("Smallest = %d", min);

    return 0;
}