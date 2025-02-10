#include <stdio.h>

int main() {
    int marks, result;
    scanf("%d", &marks);

    if (marks>=90) {
        result = 'A';
    } else if (marks>=80 && marks<90) {
        result = 'B';
    } else if (marks>=70 && marks<80) {
        result = 'C';
    } else if (marks>=60 and marks<70) {
        result = 'D';
    } else {
        result = 'F';
    }
    printf("%c", result);

    return 0;
}