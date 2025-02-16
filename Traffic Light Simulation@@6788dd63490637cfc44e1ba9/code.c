#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);

    if (n=='R') {
        printf("Stop");
    } else if (n=="G") {
        printf("Go");
    } else {
        printf("Slow Down");
    }

    return 0;
}