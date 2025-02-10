#include <stdio.h>

int main() {
    char ch;
    scanf("%c", ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    printf("Vowel");
    else if (isalpha(ch))
        printf("Consonant");
    else
    printf("Digit");
    

    return 0;
}