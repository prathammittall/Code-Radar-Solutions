#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (isdigit(ch)) {
        printf("Digit\n");
    }

    else if (isalpha(ch)) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    
    else {
        printf("Special Character\n");
    }
    return 0;
}
