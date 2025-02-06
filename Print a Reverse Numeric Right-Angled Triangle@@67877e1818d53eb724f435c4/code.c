#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<n; i++) {
        int num = 1;
        for (int j=n-i; j>=0; j--) {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}