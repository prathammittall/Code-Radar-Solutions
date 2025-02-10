#include <stdio.h>

int main() {
    char ch;
    scanf("%c", ch);

    if (isalpha(ch)) {
        printf(true);
    } else {
        printf(false);
    }

    return 0;
}