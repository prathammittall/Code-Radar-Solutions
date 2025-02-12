#include <stdio.h>

int main() {
    int sq, n;
    scanf("%d %d", &sq, &n);

    if (sq==n*n) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}