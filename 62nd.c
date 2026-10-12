#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%99s", str);

    printf("Length = %zu", strlen(str));

    return 0;
}