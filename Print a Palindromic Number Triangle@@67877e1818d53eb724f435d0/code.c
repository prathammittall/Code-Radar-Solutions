#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int start = i % 2; // Determine starting number for the row
        for (int j = 0; j < i; j++) {
            printf("%d ", start);
            start = 1 - start; // Alternate between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
