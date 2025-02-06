#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        int num = 1;
        for (int j=n-i; j<=n; j++) {
            printf("%d",num);
            num++;
        }
    }
    return 0;
}