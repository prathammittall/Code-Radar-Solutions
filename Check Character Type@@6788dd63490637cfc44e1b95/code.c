#include <stdio.h>

int main() {
    char ch;
    scanf("%c", ch);

    if (isalpha(ch)==true) {
        printf(true);
    }

    return 0;
}