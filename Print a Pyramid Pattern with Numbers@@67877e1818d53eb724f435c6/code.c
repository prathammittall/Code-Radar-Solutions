#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            printf(" ");
        }
        int counter = 1;
        for (int j=1; j<=i; j++) {
            printf("%c ", counter);
            counter++;
        }
        printf("\n");
    }
}