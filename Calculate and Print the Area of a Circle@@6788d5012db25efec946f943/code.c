#include <stdio.h>

int main() {
    int radius;
    scanf("%d", &radius);

    float r2 = radius*radius;

    printf("Area: %.2f", r2*3.14);

    return 0;
}