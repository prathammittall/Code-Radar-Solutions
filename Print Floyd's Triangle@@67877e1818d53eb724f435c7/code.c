#include <stdio.h>

int main() {
    for (int i=1; i<=n; i++) {
        int count = 1;
        for (int j=1; j<=i; j++) {
            printf("%d", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}