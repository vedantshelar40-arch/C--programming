#include <stdio.h>

int main() {
    int marks;

    scanf("%d", &marks);

    if (marks >= 90)
        printf("A");
    else if (marks >= 75)
        printf("B");
    else if (marks >= 60)
        printf("C");
    else if (marks >= 40)
        printf("D");
    else
        printf("Fail");

    return 0;
}