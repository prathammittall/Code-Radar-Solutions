#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=n; i>0; i--) {
        int counter = 1;
        for (int j=1; j<=i; j++) {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
    return 0;
}