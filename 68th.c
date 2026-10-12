#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n, i, found = 0;

    scanf("%d", &n);

    for (i = 0; i < 5; i++) {
        if (a[i] == n) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}